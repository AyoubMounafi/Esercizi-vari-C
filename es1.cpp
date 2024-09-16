#include <stdio.h>
#define DIM 50

/* Acquisire da tastiera una successione di numeri naturali che termina con l'acquisizione del 50-esimo naturale oppure con l'acquisizione di zero.
Si visualizzi la successione di naturali acquisiti al contrario (zero escluso)*/

int main (void) {
	
	int vet[DIM], n=-1, i;
	
	printf ("Inserire al massimo 50 naturali (immettere 0 per terminare l'acquisizione) \n");
	
	do {
		n = n + 1;
		printf ("-> ");
		scanf ("%d", &vet[n]);

	} while (n < DIM && vet[n] != 0);
	
	if (vet[n] == 0) n = n -1;
	
	for (i=n; i>=0; i--) printf ("%d \n", vet[i]);
	
	return 0;
}
