#include <stdio.h>

/*
 * Funzione che calcola il quoziente e il resto della divisione intera tra due numeri.
 * Input: dividendo e divisore, puntatori a interi per il quoziente e il resto.
 */
void calcolaQuozienteResto(int dividendo, int divisore, int *quoziente, int *resto);

int main() {
    int dividendo = 50, divisore = 10;
    int quoziente, resto;

    calcolaQuozienteResto(dividendo, divisore, &quoziente, &resto);

    printf("Quoziente: %d\nResto: %d\n", quoziente, resto);

    return 0;
}

void calcolaQuozienteResto(int dividendo, int divisore, int *quoziente, int *resto) {
    /* Il quoziente è il risultato della divisione intera tra dividendo e divisore */
    *quoziente = dividendo / divisore;
    *resto = dividendo % divisore;
}