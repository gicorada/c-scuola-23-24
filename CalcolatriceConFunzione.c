#include <stdio.h>

/* Funzione per il calcolo delle operazioni basiche di calcolo
 * E' possibile calcolare somma, sottrazione, moltiplicazione, divisione
 * Input: n1, n2 I due numeri su cui effettuare l'operazione; op L'operazione da eseguire
 * Output: Il risultato dell'operazione
 */
float calcola(float n1, float n2, char op);

int main() {
	float n1, n2;
	char op;
	
	printf("Inserisci il calcolo da eseguire, nel formato \"1.0 + 1.0\": ");

	scanf("%f %c %f", &n1, &op, &n2);

	/* Controllo se l'operazione è tra quelle che è possibile eseguire */
	switch(op) {
		case '+':
		case '-':
		case 'x':
		case '*':
		case '/':
			printf("%f\n", calcola(n1, n2, op));
			break;
		default:
			printf("Operazione non valida\n");
			return 0;
	}
	
	return 0;
}

float calcola(float n1, float n2, char op) {
	/* Switch per la selezione dell'operazione */
	switch(op) {
		case '+':
			return n1 + n2;
		case '-':
			return n1 - n2;
		case 'x':
		case '*':
			return n1 * n2;
		case '/':
			if(n2 != 0)	return n1/n2;
			printf("Impossibile dividere per zero");
	}
	
	/* Se non c'è un'operazione associata al simbolo inserito, ritorna 0 */
	printf("Operazione non valida");
	return 0;
}
