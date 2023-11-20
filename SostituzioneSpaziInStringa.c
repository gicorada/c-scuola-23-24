#include <stdio.h>
#include <string.h>

/*
 * Sostituisce gli spazi con gli underscore in una stringa.
 */
void sostituisciSpazioConUnderscore(char str[]);

int main() {
    char text[20];

    printf("Inserisci una stringa: ");
    fgets(text, 20, stdin);

    sostituisciSpazioConUnderscore(text);

    printf("La stringa modificata è: %s", text);
}

void sostituisciSpazioConUnderscore(char str[]) {
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == ' ') {
            str[i] = '_';
        }
    }
}