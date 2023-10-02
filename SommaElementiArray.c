#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int capienza = 10;
	int valori[capienza];
	
	srand(time(NULL));
	
	
	for(int i = 0; i < capienza; i++)
		valori[i] = (rand() % 20) + 1;
	
	
	printf("Valori nell'array:\n");
	for(int i = 0; i < capienza; i++) {
		printf("%d\t", valori[i]);
	}
	printf("\n");
	
	
	int somma = 0;
	
	for(int i = 0; i < capienza; i++)
		somma += valori[i];
	
	printf("La somma dei valori contenuti nell'array e' %d", somma);
	
	return 0;
}
