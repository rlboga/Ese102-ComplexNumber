	// Paparelli G. - Boga R.

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


    studente * allocaVettoreStudente(int n);
	void memorizzaDatiStudente(studente * v, int p, char nome[], char cognome[], char classe[], int anno);
	studente * ingrandisciECopiaVettoreStudente(studente *v, int dimensioneAttuale, int nuovaDimensione);
	void stampaDatiStudente(studente s);

	int main()
	{
		int j, anno, controllo, entraNelWhile=1, dimensione=2, i=0;
        char nome[20],cognome[30],classe[5];

	    studente *vettoreStudenti;
		vettoreStudenti=allocaVettoreStudente(dimensione);

		printf("il numero 1 corrsponde a 'Si'");
		printf("\nil numero 0 corrsponde a 'No'\n\n");
        printf("Inserisci i dati\n");

		while (entraNelWhile==1)
		{
            printf("\nInserisci il nome:              ");
            scanf("%s",nome);
            printf("Inserisci il cognome:           ");
            scanf("%s",cognome);
            printf("Inserisci l'anno di nascita:    ");
            scanf("%d",&anno);
            printf("Inserisci la classe:            ");
            scanf("%s",classe);
            memorizzaDatiStudente(vettoreStudenti,i,nome,cognome,classe,anno);

			i++;

			//printf("%d",i);

            printf("\nmemorizzare un'altro studente: ");
			scanf("%d",&controllo);
            if (controllo==0)
            {
                for(j=0; j<i; j++)
                {
                    stampaDatiStudente(vettoreStudenti[j]);
                }
                entraNelWhile=0;
            }

            if((controllo==1) && (i>2))
			{
			    ingrandisciECopiaVettoreStudente(vettoreStudenti,dimensione,dimensione*2);
			}


	    }

		printf("\n\n");
		system("PAUSE");
		return 0;
	}

	void memorizzaDatiStudente(studente * v, int p, char nome[], char cognome[], char classe[], int anno)
	{
        strcpy(v[p].nome,nome);
	    strcpy(v[p].cognome,cognome);
	    strcpy(v[p].classe,classe);
	    v[p].anno=anno;

	}

	studente * allocaVettoreStudente(int n)
	{

        studente *vettoreStudenti;
        vettoreStudenti=(studente*)malloc(n*sizeof(studente));
        if(vettoreStudenti==NULL)
        {
            printf("Non ho abbastanza memoria per l'allocazione\n");
            exit (1);
        }
        return(vettoreStudenti);
	}

	studente * ingrandisciECopiaVettoreStudente(studente *v, int dimensioneAttuale, int nuovaDimensione)
	{
        studente * alunno;
        alunno=(studente*)malloc(nuovaDimensione*sizeof(studente));
        int i;
        for (i=0; i<dimensioneAttuale; i++)
        {
            strcpy(alunno[i].nome,v[i].nome);
            strcpy(alunno[i].cognome,v[i].cognome);
            alunno[i].anno=v[i].anno;
            strcpy(alunno[i].classe,v[i].classe);
        }
        return alunno;
	}


    void stampaDatiStudente(studente s)
    {
      printf("\n Nome: %s    Cognome: %s    Anno di Nascita: %d    Classe: %s\n",s.nome,s.cognome,s.anno,s.classe);
    }

