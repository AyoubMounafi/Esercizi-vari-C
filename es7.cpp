/* Si acquisisca da tastiera un numero naturale n e si visualizzi tutti i numeri primi compresi tra 2 ed n.
Per fare questo si sfruttino le seguenti due proprietà:
- un numero è primo se e solo se non ha nemmeno un divisore primo
- un numero è primo se e solo se non ha divisori compresi tra 2 e la sua radice quadrata intera */

#include <stdio.h>
#define MAX 100000

int main (void) {
	
	int primi[MAX], i, j, num, num_div, num_primi=0;
	printf ("Inserire un numero positivo minore di %d -> ", MAX);
	scanf ("%d", &num);
	
	for (i=2; i<=num; i++) {
		
		num_div=0;
		for (j=0; j<num_primi && primi[j]*primi[j]<=i && num_div==0; j++) if (i%primi[j]==0) num_div++;
		
		if (num_div==0) {
			printf ("%d ", i);
			primi[num_primi] = i;
			num_primi++;
		}	
	}
	
	return 0;
}

