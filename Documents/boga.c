#include <stdio.h>
#include <stdlib.h>

int somma(int pippo, int pluto);
void scambia(int *pippo, int *pluto);

int main() {
	int a=65, b=83;
	int risultato;
	
	risultato = somma(a, b);
	
	printf("Prima: a = %d, b = %d\n", a, b);
	scambia(a, b);
	printf("Dopo: a = %d, b = %d\n", a, b);
	
	getch();
	return 0;
}

int somma(int pippo, int pluto) {
	return pippo + pluto;
}

void scambia(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	
	return;

}

