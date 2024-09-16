/* Si acquisisca da tastiera un numero naturale n e si visualizzi tutti i numeri primi compresi tra 2 ed n */

#include <stdio.h>

int main (void) {
	
	int num, i, j, num_div;
	
	printf ("Inserire un numero naturale -> ");
	scanf ("%d", &num);
	printf ("I numeri primi compresi tra 2 e %d sono: ", num);
	
	for (i=2; i<=num; i++) {
		num_div=0;
		for (j=1; j<=i; j++) if (i%j==0) num_div++;
		if (num_div==2) printf ("%d ", i);
	}
	
	return 0;
}
