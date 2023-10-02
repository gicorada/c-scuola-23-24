#include <stdio.h>

int main() {
	int n;
	int fatt = 1;
	
	do {
		printf("Inserisci il numero di cui calcolare il fattoriale: ");
		scanf("%d", &n);
	} while(n<0);
	
	for(int i=1; i<=n; i++) {
		fatt *= i;
	}
	
	printf("Il fattoriale di %d e' %d", n, fatt);
	
	return 0;
}
