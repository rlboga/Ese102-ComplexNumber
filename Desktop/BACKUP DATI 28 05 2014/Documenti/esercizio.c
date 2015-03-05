#include <stdio.h>
#include <string.h>

int leggiscrivi()

int y=15;

main()
{
      FILE *pf1, *pf2, *pf3;
      pf1=fopen("elenco.txt", "r");
      pf2=fopen("dimensione.txt", "r");
      pf3=fopen("elenco.svg", "w");
      
      
      fputs("intestazione dell'SVG", pf3);
      
      
