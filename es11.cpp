/* Riempire una tabella di 10 righe e 5 colonne con interi pseudo-casuali compresi tra 0 e 1 (estremi inclusi).
I 5 numeri presenti su ciascuna riga della matrice rappresentano le 5 cifre di un numero binario: 
- la cifra sulla prima colonna della matrice è la più significativa
- la cifra sulla quinta colonna della matrice è la meno significativa.
Visualizzare la conversione in base 10 dei dieci numeri binari presenti sulle righe della tabella */

#include <stdio.h>
#include <stdlib.h>
#define DIMR 10
#define DIMC 5

int main (void) {
	
	int mat[DIMR][DIMC], i, j, num_conv;
	
	for (i=0; i<DIMR; i++) {
		for (j=0; j<DIMC; j++) {
			mat[i][j]= rand() %2 +0;
			printf ("%5d", mat[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n");
	
	for (i=0; i<DIMR; i++) {
		num_conv=0;
		for (j=0; j<DIMC; j++) {
			num_conv=num_conv*2+mat[i][j];
		}
		printf ("Riga %d in base dieci: %d\n", i+1, num_conv);
	}
	
	return 0;
}






