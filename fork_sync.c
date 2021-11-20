#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main (void) {
int valeur, ret_fils,etat ;
printf ("Je suis le processus père num=%d \n", (int)getpid());
valeur=fork();
switch (valeur)
{
	case 0 :
		printf("\t\t\t\t********\n\t\t\t\t* FILS * \n\t\t\t\t********\n");
		printf ("\t\t\t\tProc fils num= %d - \n\t\t\t\tPère num= %d \n", (int) getpid(),(int) getppid() );
		printf("\t\t\t\tJe vais dormir 30 secondes ...\n");
		sleep (30);
		printf("\t\t\t\tJe me reveille , \n\t\t\t\tJe termine mon execution par un EXIT(7)\n");
		exit (7);
	case -1:
		printf ("Le fork a echoue");
		exit(2);
	default:
		printf("********\n* PERE *\n********\n");
		printf ("Proc père num= %d -\n Fils num= %d \n", (int) getpid(),valeur );
		printf ("J’attends la fin de mon fils: \n");
		ret_fils = wait (&etat);
		printf("Mon fils de num=%d est termine,\nSon état était :%0x\n", ret_fils,etat);
}
}
