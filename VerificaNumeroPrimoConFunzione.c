#include <stdio.h>

/* Funzione per calcolare se un numero è primo
 * Input: n1 Il numero da verificare
 * Output: 0 se non primo, 1 se primo
 */
int verificaprimo(int numero);

int main() {
	int numero;
	
	do {
		printf("Inserisci il numero da verificare: ");
		scanf("%d", &numero);
	} while(numero <= 0);
	
	if(verificaprimo(numero) == 0) printf("Il numero non e' primo");
	else printf("Il numero e' primo");
	
	return 0;
}

int verificaprimo(int numero) {
	/* Controlla se il numero è primo partendo dal divisore 2 */
	for(int i = 2; i <= numero/2; i++) { 
		if(numero%i == 0) return 0;
	}
	return 1;
}
