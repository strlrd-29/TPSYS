#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main (void)
{
int valeur;
	valeur = fork();
	sleep(4);
		printf (" Valeur retournée par la fonction fork: %d\n", (int)valeur);
		printf ("Je suis le processus numéro %d\n", (int)getpid());
	
return 0;
}
