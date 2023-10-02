#include <stdio.h>

/* Funzione per la ricerca del minimo divisore
 * Input: il numero num
 * Output: il minimo divisore
 */
int minDiv(int num);

int main() {
	int n;
	int min = 0;
	int div = 2;
	
	do {
		printf("Inserisci il numero di cui calcolare il minimo divisore: ");
		scanf("%d", &n);
	} while(n<2);
	
	/* Cerco il minimo divisore partendo con il numero 2 */
	while (min == 0) {
		if(n%div == 0) min = div;
		div++;
	}
	
	div = minDiv(n);
	
	printf("Il minimo divisore e' %d", div);
	
	return 0;
}

int minDiv(int num) {
	int div = 2;
	while(!(num%div==0)) {
		div++;
	}
	return div;
}
