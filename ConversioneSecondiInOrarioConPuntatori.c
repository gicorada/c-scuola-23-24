#include <stdio.h>

/*
 * Funzione che converte un numero di secondi in ore, minuti e secondi.
 * Input: tot_sec Numero di secondi da convertire; puntatori a interi per le ore, i minuti e i secondi.
 */
void convertiSecondi(long int tot_sec, int *h, int *m, int *s);

int main() {
    long int tot_sec = 3601;
    int h, m, s;

    convertiSecondi(tot_sec, &h, &m, &s);

    printf("%.2d:%.2d:%.2d\n", h, m, s);

    return 0;
}

void convertiSecondi(long int tot_sec, int *h, int *m, int *s) {
    /* Divido i secondi per 3600 per ottenere le ore */
    *h = tot_sec / 3600;
    /* Divido il resto per 60 per ottenere i minuti */
    *m = (tot_sec % 3600) / 60;
    /* Il resto dell'operazione precedente corrisponde ai secondi */
    *s = (tot_sec % 3600) % 60;
}