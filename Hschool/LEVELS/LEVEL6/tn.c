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
    printf("  ##         �ڳ� ���� ����        ##\n");
    printf("  ##                                 ##\n");
    printf("  ##                                 ##\n");
    printf("  ##     1. ������     2. ���촩��   ##\n");
    printf("  ##     3. õ����                   ##\n");
    printf("  ##                                 ##\n");
    printf("  #####################################\n");

    signal( SIGINT, sig_func );
    printf("\n�����ϰ� ���� bbs�� �����ϼ��� : ");
    scanf( "%d", &i );

    if( i==1 ) system("telnet 203.245.15.76");
    if( i==2 ) system("telnet 203.238.129.97");
    if( i==3 ) system("telnet 210.120.128.180");
    if( i!=1 && i!=2 && i!=3 ) 
	printf("�߸� �Է��ϼ̽��ϴ�. ������ �����մϴ�.\n");

}
