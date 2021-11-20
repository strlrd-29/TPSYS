#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main (int argc, char *argv[])

{ 
	int Pid;
	int Fils,Etat;
/*
----------------------------------------------------------
On peut exécuter ce programme en lui passant diverses commandes en argument, par exemple, si l’exécutable est fexec :
fexec /usr/bin/ps
----------------------------------------------------------
*/ if (argc != 2)

{
	printf(" Utilisation : %s fic. à exécuter ! \n", argv[0]); exit(1); }
	printf (" Je suis le processus %d je vais faire fork\n",(int) getpid()); Pid=fork();
	switch (Pid) { 
		case 0 :
			printf (" Coucou ! je suis le fils %d\n",(int) getpid());
			printf (" %d : Code remplace par %s\n",(int) getpid(), argv[1]);
			execl(argv[0], argv[1],(char*) NULL);
			printf (" %d : Erreur lors du exec \n", (int) getpid()); exit (2); 
		case -1 : 
			printf (" Le fork n’a pas réussi ");
			exit (3) ; 
		default :
/* le père attend la fin du fils */
			printf (" Père numéro %d attend\n ",(int) getpid()); Fils=wait (&Etat);
			printf ( " Le fils était : %d ", Fils);
			printf (" ... son état était :%0x (hexa) \n",Etat); exit(0);
	}

return 0;
}

