#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CAPIENZA 10

/*
 * Funzione che restituisce la somma degli elementi contenuti in un array.
 * num: array in input;
 * n: capienza di num.
 * Output: la somma degli elementi presenti in num
 */
int calcolaSommaElementiArray(int num[], int n);

/* Funzione che inizializza un array con valori random
 * Input: num L'array da inizializzare; n La capienza dell'array
 */ 
void inizializzaArray(int num[], int n);

/* Funzione che stampa un array
 * Input: num L'array da stampare; n La capienza dell'array
 */ 
void stampaArray(int num[], int n);

int main(){
	int valori[CAPIENZA];
	
	srand(time(NULL));
	
	inizializzaArray(valori, CAPIENZA);
	stampaArray(valori, CAPIENZA);
	
	int somma = calcolaSommaElementiArray(valori, CAPIENZA);
	printf("La somma dei valori contenuti nell'array e' %d", somma);
	
	return 0;
}

void inizializzaArray(int num[], int n) {
	for(int i = 0; i < n; i++)
		num[i] = (rand() % 20) + 1;
}

void stampaArray(int num[], int n) {
	printf("Valori nell'array:\n");
	for(int i = 0; i < n; i++) {
		printf("%d\t", num[i]);
	}
	printf("\n");
}

int calcolaSommaElementiArray(int num[], int n) {
	int tot = 0;
	
	for(int i = 0; i < n; i++)
		tot += num[i];
	
	return tot;
}
