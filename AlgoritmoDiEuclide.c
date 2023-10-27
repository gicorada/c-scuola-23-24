#include <stdio.h>

/*
 * Funzione che calcola il massimo comun divisore tra due numeri sfruttando l'algoritmo di euclide e i puntatori.
 * Input: due numeri interi, puntatore a intero per il massimo comun divisore.
 */
void mcd(int a, int b, int *mcd);

/*
 * Funzione che calcola il minimo comun multiplo tra due numeri sfruttando l'algoritmo di euclide e i puntatori.
 * Input: due numeri interi, puntatore a intero per il minimo comun multiplo.
 */
void mcm(int a, int b, int *mcm);

int main() {
    int a, b;
    /* Creo le variabili per poter registrare i valori di mcd e mcm */
    int mcd_ab, mcm_ab;

    /* Ricevo a e b in ingresso dall'utente */
    printf("Inserisci due numeri interi positivi: ");
    scanf("%d %d", &a, &b);

    /* se b > a, scambio i valori di a e b */
    if(b > a) {
        int temp = a;
        a = b;
        b = temp;
    }

    /* Calcolo mcd e mcm */
    mcd(a, b, &mcd_ab);
    mcm(a, b, &mcm_ab);

    printf("MCD: %d\nMCM: %d\n", mcd_ab, mcm_ab);

    return 0;
}

void mcd(int a, int b, int *mcd) {
    int resto;

    if (a > 0 && b > 0 && b <= a) {
        /* Applico l'algoritmo di Euclide */
        while (b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }

        /* Il mcd è l'ultimo valore di a */
        *mcd = a;
    } else {
        *mcd = 0;
    }
}

void mcm(int a, int b, int *mcm) {
    int mcd_ab;

    if (a > 0 && b > 0) {
        /* Calcolo il mcd tra a e b */
        mcd(a, b, &mcd_ab);
        /* Uso l'algoritmo di euclide per calcolare il mcm dal mcd */
        *mcm = (a * b) / mcd_ab;
    } else {
        *mcm = 0;
    }
}