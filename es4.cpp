/* Acquisire da tastiera 5 interi e successivamente (dopo avere acquisito tutti gli interi) 
visualizzare quanti divisori ha ciascun intero acquisito */

#include <stdio.h>
#define DIM 5

int main (void) {
	
	int vet[DIM], i, num_div, j;
	
	printf ("Inserire cinque interi -> ");
	for (i=0; i<DIM; i++) scanf ("%d", &vet[i]);
	
	for (i=0; i<DIM; i++) {
		
		num_div=0;
		
		for (j=1; j<=vet[i]; j++) if (vet[i]%j==0) num_div++;
		printf ("%d ha %d divisori\n", vet[i], num_div);
	}
	
	return 0;
}

