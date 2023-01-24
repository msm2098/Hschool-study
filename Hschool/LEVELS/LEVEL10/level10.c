#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

char *text;
int shmid;

int main( void ) {

    	shmid = shmget((key_t)7530, 1028, 0666 | IPC_CREAT);
	text = shmat(shmid, (void *)0, 0);

	strcpy(text,"港港: level11狼 菩胶况靛绰?\n备鸥: what!@#$?\n");

}
