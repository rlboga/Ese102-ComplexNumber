// Alberetti L. - Paparelli G.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
	struct s_studente
	{
		char nome [30];
		char cognome [30];
		int anno;
		char classe [10];
	};
	typedef struct s_studente studente;


studente * allocaVettoreStudente(int dim);
void memorizzaDatiStudente(studente * v, int p, char nome[], char cognome[], char classe[], int anno);
void stampaDatiStudente(studente s);

int main()
{
	int dim,i,anno;
	char nome[20],cognome[30],classe[5];

	printf("Numero di studenti di cui si devono acquisire i dati:  ");
	scanf("%d",&dim);
	studente *vettoreStudenti ;
	vettoreStudenti=allocaVettoreStudente(dim);
	for(i=0;i<dim;i++)
	{
			printf("\n\nInserisci il nome:               ");
			scanf("%s",nome);
			printf("Inserisci il cognome:            ");
			scanf("%s",cognome);
			printf("Inserisci l'anno di nascita:     ");
			scanf("%d",&anno);
			printf("Inserisci la classe:             ");
			scanf("%s",classe);
			memorizzaDatiStudente(vettoreStudenti,i,nome,cognome,classe,anno);
	}
	for(i=0;i<dim;i++)
	{
        stampaDatiStudente(vettoreStudenti[i]);
	}
	free(vettoreStudenti);
	return 0;

}

studente * allocaVettoreStudente(int dim)
{
	studente *vettoreStudenti;
	vettoreStudenti=(studente*)malloc(dim*sizeof(studente));
	if(vettoreStudenti==NULL)
	{
		printf("Erorre!\n");
		exit (1);
	}
	else
		return(vettoreStudenti);
}

void memorizzaDatiStudente(studente * v, int p, char nome[], char cognome[], char classe[], int anno)
{

	    strcpy(v[p].nome,nome);
	    strcpy(v[p].cognome,cognome);
	    strcpy(v[p].classe,classe);
	    v[p].anno=anno;

}

void stampaDatiStudente(studente s)
{
      printf("\n\nnome: %s    cognome: %s    anno di nascita: %d    classe: %s",s.nome,s.cognome,s.anno,s.classe);
}

