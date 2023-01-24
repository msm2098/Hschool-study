#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

void sig_func( int sig )
{
	printf( "Can't use ctrl+c\n" );
}

int main(){

    int i;

    system("cat hint");
    getchar();
    system("clear");
    printf("\n  #####################################\n");
    printf("  ##                                 ##\n");
    printf("  ##         텔넷 접속 서비스        ##\n");
    printf("  ##                                 ##\n");
    printf("  ##                                 ##\n");
    printf("  ##     1. 하이텔     2. 나우누리   ##\n");
    printf("  ##     3. 천리안                   ##\n");
    printf("  ##                                 ##\n");
    printf("  #####################################\n");

    signal( SIGINT, sig_func );
    printf("\n접속하고 싶은 bbs를 선택하세요 : ");
    scanf( "%d", &i );

    if( i==1 ) system("telnet 203.245.15.76");
    if( i==2 ) system("telnet 203.238.129.97");
    if( i==3 ) system("telnet 210.120.128.180");
    if( i!=1 && i!=2 && i!=3 ) 
	printf("잘못 입력하셨습니다. 접속을 종료합니다.\n");

}
