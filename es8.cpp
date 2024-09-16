/* Si consideri una matrice di 5 righe e 9 colonne di interi pseudo-casuali compresi tra -3 e +12.
Si visualizzi la matrice e la matrice trasposta */

#include <stdio.h>
#include <stdlib.h>
#define DIMR 5
#define DIMC 9

int main (void) {
	
	int mat[DIMR][DIMC], i, j;
	
	for (i=0; i<DIMR; i++) {
		for (j=0; j<DIMC; j++) {
			mat[i][j]= rand() %16 -3;
			printf ("%5d", mat[i][j]);	
		}	
		printf ("\n");	
	}
	
	printf ("\n");
	
	for (j=0; j<DIMC; j++) {
		for (i=0; i<DIMR; i++) {
			printf ("%5d ", mat[i][j]);	
		}	
		printf ("\n");	
	}
	
	return 0;
}

