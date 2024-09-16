/* Si acquisisca da tastiera un numero naturale. 
Si visualizzi per ciascuna cifra da 0 a 9 quante volte la cifra compare nel naturale acquisito*/

#include <stdio.h>
#define DIM 10

int main (void) {
	
	int vet_cifre[DIM]={0}, num, i;
	
	printf ("Inserire un numero naturale -> ");
	scanf ("%d", &num);
	
	do {
		vet_cifre[num%10]++;
		num = num/10;
	} while (num>0);
	
	for (i=0; i<DIM; i++) printf ("La cifra %d comprare %d volte nel numero inserito\n", i, vet_cifre[i]);
	return 0;
}

