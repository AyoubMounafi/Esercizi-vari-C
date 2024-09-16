/* Si consideri una matrice di 5 righe e 9 colonne di interi pseudo-casuali compresi tra -60 e +60.
Si visualizzi la colonna con la maggior quantità di interi positivi*/ 

#include <stdio.h>
#include <stdlib.h>
#define DIMR 5
#define DIMC 9

int main (void) {
	
	int mat[DIMR][DIMC], i, j, num_col, conta, num_pos=-1;
	
	for (i=0; i<DIMR; i++) {
		for (j=0; j<DIMC; j++) {
			mat[i][j]= rand() %121 -60;
			printf ("%5d", mat[i][j]);
		}
		printf ("\n");
	}
	
	for (j=0; j<DIMC; j++) {
		conta=0;
		for (i=0; i<DIMR; i++) if (mat[i][j]>0) conta++;
		if (conta>num_pos) {
			conta=num_pos;
			num_col=j;
		}		
	}
	
	printf ("\n");
	for (i=0; i<DIMR; i++) printf ("%d\n", mat[i][num_col]);
	
	return 0;
}
