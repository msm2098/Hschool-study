#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	setreuid( 3003, 3003 );
	system( "/bin/vi" );
}
