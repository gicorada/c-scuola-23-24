#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CAPIENZA 10

/*
  Funzione che restituisce il numero di elementi positivi di un array.
  Input: num Array in input; n Capienza dell'array.
  Output: il numero di elementi positivi presenti in num
*/
int calcolaNumeroElementiPositivi(int num[ ], int n);

/* Funzione che inizializza un array con valori random
 * Input: num Array da inizializzare; n Capienza dell'array
 */ 
void inizializzaArray(int num[], int n);

/* Funzione che stampa un array
 * Input: num Array da stampare; n La capienza dell'array
 */ 
void stampaArray(int num[], int n);


int main() {
	
	int valori[CAPIENZA];
	
	srand(time(NULL));
	
	inizializzaArray(valori, CAPIENZA);
	stampaArray(valori, CAPIENZA);
	
	printf("Numero di elementi positivi: %d\n", calcolaNumeroElementiPositivi(valori, CAPIENZA));
	
	return 0;
}

int calcolaNumeroElementiPositivi(int num[], int n) {
	int pos = 0;
	
	for(int i = 0; i < n; i++) {
		if(num[i] > 0) pos++;
	}
	
	return pos;
}

void inizializzaArray(int num[], int n) {
	for(int i = 0; i < n; i++) {
		num[i] = (rand() % (15 + 15 + 1)) - 15;
	}
}

void stampaArray(int num[], int n) {
	printf("Valori nell'array:\n");
	for(int i = 0; i < n; i++) {
		printf("%d\t", num[i]);
	}
	printf("\n");
}
