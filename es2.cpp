/* Si consideri una sequenza di 10 numeri pseudo-casuali compresi tra -50 e +50 (estremi inclusi).
Si visualizzi il massimo intero nella sequenza e la posizione del massimo nella sequenza */

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main (void) {
	
	int vet[DIM], i, max=-50, pos_max;
	
	for (i=0; i<DIM; i++) {
		vet[i] = rand() %101 -50;	
		printf ("%d ", vet[i]);
		
		if (vet[i]>max) {
			max = vet[i]; 
			pos_max=i+1;
		}
	}
	
	printf ("\nMassimo intero della sequenza: %d\n", max);
	printf ("Posizione del massimo intero della sequenza: %d\n", pos_max);
	
	return 0;
}
