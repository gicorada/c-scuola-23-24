#include <stdio.h>

int somma2num(int n1, int n2);
int somma3num(int n1, int n2);

int main() {
	int n, m;
	int sum = 0;
	
	printf("Inserisci due numeri interi di cui calcolare il prodotto: ");
	scanf("%d %d", &n, &m);
	
	/* Inverto il segno dei numeri se il fattore di moltiplicazione è negativo */
	if(m<0) {
		n = -n;
		m = -m;
	}
	
	/* Inverto le due variabili se il fattore è maggiore del primo numero */
	if(m>n) {
		int temp = m;
		m = n;
		n = temp;
	}
	
	/* Sommo m volte n */
	for(int i=0; i<m; i++) {
		sum += n;
	}
	
	printf("Il prodotto e' %d", sum);
	
	return 0;
}
