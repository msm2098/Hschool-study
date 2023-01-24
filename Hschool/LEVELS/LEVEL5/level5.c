#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

#define TMP_FILE	"/tmp/level5.tmp"
#define LVL6_PASS	"next password : what the hell\n"

int main( void )
{
    int fd;

    fd = creat( TMP_FILE, S_IRUSR|S_IWUSR );
    if( fd < 0 )
    {
	printf( "Can not creat a temporary file.\n" );
	remove( TMP_FILE );
	exit(0);
    }

    write( fd, LVL6_PASS, strlen( LVL6_PASS ) + 1 );
    close( fd );

    remove( TMP_FILE );
}
