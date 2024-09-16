/* Si acquisisca da tastiera una parola formata da al massimo 49 lettere.
Si acquisisca un carattere e successivamente si visualizzi:
- in quali posizioni della parola il carattere appare 
- il numero di volte per cui il carattere appare nella parola */

#include <stdio.h>
#include <string.h>
#define DIM 50

int main (void) {
	
	char parola[DIM], carattere;
	int i, num_carattere=0;
	
	printf ("Inserire una parola -> ");
	scanf ("%s", parola);
	
	printf ("Inserire un carattere -> ");
	scanf (" %c", &carattere);
	
	for (i=0; i<DIM && parola[i]!='\0'; i++) {
		if (parola[i]==carattere) {
			printf ("\nIl carattere appare in poizione %d della parola", i+1);
			num_carattere++;
		}	
	}
	
	printf ("\n\nNumero totale di volte che il carattere appare: %d", num_carattere);
	
	return 0;
}

