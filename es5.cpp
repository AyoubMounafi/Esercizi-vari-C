/* Si consideri una sequenza di 20 numeri naturali pseudo-casuali compresi tra 10 e 100.
Visualizzare il massimo comune divisore dei naturali della sequenza */

#include <stdio.h>
#include <stdlib.h>
#define DIM 20

int main (void) {
	
	int vet[DIM], i, j, mcd, min=100, num_div; 
	
	for (i=0; i<DIM; i++) {
		vet[i] = rand() %91 +10;
		printf ("%d ", vet[i]);
		if (vet[i]<min) min=vet[i];
	}
		
	for (j=1; j<=min; j++) {
		num_div=0;
		for (i=0; i<DIM; i++) if (vet[i]%j==0) num_div++;
		if (num_div==DIM) mcd=j;
	}
	
	printf ("\nIl massimo comune divisore dei naturali della sequenza e' %d\n", mcd);
	
	return 0;
}

