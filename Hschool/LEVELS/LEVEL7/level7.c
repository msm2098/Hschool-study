#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

    char *str;
    str = (char *)malloc(100);

    printf( "Insert The Password : " );
    fgets( str, 100, stdin );

    if(strncmp( str, "mate", 4) == 0 ){
	printf( "\nCongratulation! next password is \"break the world\".\n\n" );
    	exit(0);
    }

    system("cat /bin/wrong.txt");
}
