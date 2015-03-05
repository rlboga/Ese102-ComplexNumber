//Boga R. - Leca A.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

main()
{
	struct s_scolaro   //Definisco una struttura
	{
		char nome[10];
		char cognome[10];
		int anno;
		char classe[5];	
	};
	
	typedef struct s_scolaro scolaro;                //Definisco una variabile di tipo sruttura (in questo caso scolaro)
	
    int n_studenti,i;
	
	printf("Inserisci numero di studenti: ");
	scanf("%d", &n_studenti);
	
	scolaro *scuola;                               // dichiarato variabile puntatore che punta alla struttura
	scuola=(scolaro*)malloc(n_studenti*(sizeof(scolaro)));
	
	for(i=0;i<n_studenti;i++)                    //facciamo un ciclo per i vari studenti
	{
	    printf("Inserisci nome: ");
		scanf("%s",(scuola[i].nome));
		printf("Inserisci cognome: ");
		scanf("%s",(scuola[i].cognome));
		printf("Inserisci anno: ");
		scanf("%d", &(scuola[i].anno));
		printf("Inserisci classe: ");
		scanf("%s",(scuola[i].classe));
    }
    	for(i=0;i<n_studenti;i++)                     // ciclo per stampare i campi dei vari studenti
	{
        printf("\nnome: %s cognome: %s anno: %d classe: %s\n", (scuola[i].nome), (scuola[i].cognome), (scuola[i].anno), (scuola[i].classe));
    }
    free(scuola);                                  //libera la memoria
	
	
return 0;
}
                                 
