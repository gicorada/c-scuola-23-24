#include <stdio.h>
#include <stdlib.h>
#include "../utils.h"

#define CAP 20

/* Funzione che selezione solo i numeri positivi di un array fornito, per inserirli in un altro array
 * Input:	num Array di ingresso;
 * 			cap La capienza dell'array di input;
 * 			numPos Array di output;
 *
 * Output: 	Quantità di numeri positivi presenti nell'array;
 * 			Tramite la modifica di numPos, valori positivi presenti nell'array
 */
int inizializzaPositivi(const int num[], int cap, int numPos[]);

void inizializzaRandom(int num[], int cap) { inizializzaArrayRandom(num, cap, -10, 10); }
void visualizza(int num[], int cap) { stampaArray(num, cap); }

int main() {
	int valori[CAP];
    int *valoriPositivi = NULL;
    int contaPositivi;

    inizializzaRandom(valori, CAP);
    visualizza(valori, CAP);

    valoriPositivi = (int*)malloc(CAP * sizeof(int));
    if(valoriPositivi == NULL) {
        printf("Errore. Memoria non disponibile");
        exit(EXIT_FAILURE);
    }

    contaPositivi = inizializzaPositivi(valori, CAP, valoriPositivi);

    printf("\n");
    visualizza(valoriPositivi, contaPositivi);

    free(valoriPositivi);

	return 0;
}

int inizializzaPositivi(const int num[], int cap, int numPos[]) {
    int temp[cap];
    int contaPos = 0;

    for(int i = 0; i < cap; i++) {
        /* Se l'elemento i di num è positivo, lo aggiungo ad output alla posizione contaPositivi */
        if(*(num+i) > 0) {
            *(temp+contaPos++) = *(num+i);
        }
    }

    for(int i = 0; i < contaPos; i++) {
        *(numPos + i) = temp[i];
    }

    return contaPos;
}