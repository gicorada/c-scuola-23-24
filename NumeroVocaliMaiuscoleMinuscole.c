#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define DIM 20

void contaVocaliMaiuscoleMinuscole(const char *testo, int *maiuscole, int *minuscole);

int main() {
    char *testo;
    int maiuscole, minuscole;

    testo = (char*) malloc(DIM * sizeof(char));
    if(testo == NULL) {
        printf("Errore. Memoria non disponibile");
        exit(EXIT_FAILURE);
    }

    printf("Inserisci una stringa (massimo %d caratteri): ", DIM);
    fflush(stdin);
    fgets(testo, DIM, stdin);

    contaVocaliMaiuscoleMinuscole(testo, &maiuscole, &minuscole);

    printf("La stringa inserita ha %d vocali maiuscole e %d vocali minuscole", maiuscole, minuscole);

    free(testo);

    return 0;
}

void contaVocaliMaiuscoleMinuscole(const char *testo, int *maiuscole, int *minuscole) {
    *maiuscole = 0;
    *minuscole = 0;

    for(int i = 0; i < strlen(testo); i++) {
        /* Verifica se il carattere è una vocale */
        if(testo[i] == 'a' || testo[i] == 'e' || testo[i] == 'i' || testo[i] == 'o' || testo[i] == 'u' ||
           testo[i] == 'A' || testo[i] == 'E' || testo[i] == 'I' || testo[i] == 'O' || testo[i] == 'U') {
            /* Verifica se il carattere è maiuscolo o minuscolo */
            if (toupper(testo[i]) == testo[i]) {
                *maiuscole += 1;
            } else if (tolower(testo[i]) == testo[i]) {
                *minuscole += 1;
            }
        }
    }
}