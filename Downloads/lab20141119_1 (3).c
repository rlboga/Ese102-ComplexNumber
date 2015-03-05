// G. Paparelli - R. Boga
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	struct s_studente
	{
		char nome [30];
		char cognome [30];
		int anno;
		char classe [10];
	};
	typedef struct s_studente studente;

	int dim,i;

	printf("Numero di studenti di cui si devono acquisire i dati?\n");
	scanf("%d",&dim);

	studente *vettoreStudenti;

	vettoreStudenti=(studente*)malloc(dim*sizeof(studente));

	if(vettoreStudenti==NULL)                                            // controlla che l'allocazione di memoria sia andata a buon fine.
	{
		printf("Non ho abbastanza memoria per l'allocazione\n");
		exit (1);
	}
	else
	{
	   for(i=0;i<dim;i++)
        {
            printf("\nInserisci il nome:               ");
            scanf("%s",(vettoreStudenti[i].nome));
            printf("Inserisci il cognome:            ");
            scanf("%s",(vettoreStudenti[i].cognome));
            printf("Inserisci l'anno di nascita:     ");
            scanf("%d",&(vettoreStudenti[i].anno));
            printf("Inserisci la classe:             ");
            scanf("%s",(vettoreStudenti[i].classe));
	   }

	   for(i=0;i<dim;i++)
	   {
	       printf("\nnome = %s cognome =%s anno di nascita = %d classe = %s\n\n",&(vettoreStudenti[i].nome),&(vettoreStudenti[i].cognome),(vettoreStudenti[i].anno),&(vettoreStudenti[i].classe));
	   }

	}
	free(vettoreStudenti);


    printf("\n\n");
    system("PAUSE");
    return 0;
}

