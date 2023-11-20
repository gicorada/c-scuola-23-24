#include <stdio.h>
#include <stdlib.h>
#include "../utils.h"

#define CAP 20

int main() {
	int valori[CAP];

    inizializzaArrayRandom(valori, CAP, -10, 10);
    stampaArray(valori, CAP);

    int *valoriPositivi = (int*)malloc(CAP * sizeof(int));
    if(valoriPositivi == NULL) {
        printf("Errore. Memoria non disponibile");
        exit(EXIT_FAILURE);
    }

    int contaPositivi = 0;

    for(int i = 0; i < CAP; i++) {
        /* Se l'elemento i di valori è positivo, lo aggiungo alla posizione contaPositivi */
        if(*(valori+i) > 0) {
            *(valoriPositivi+contaPositivi++) = *(valori+i);
        }
    }

    printf("\n");
    stampaArray(valoriPositivi, contaPositivi);
	
	return 0;
}