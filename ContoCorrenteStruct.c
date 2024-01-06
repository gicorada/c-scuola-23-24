#include <stdio.h>

typedef struct contocorrente {
    char *codice;
    float saldo;
} t_contoCorrente;

void deposito(t_contoCorrente *conto, float importo);
void prelievo(t_contoCorrente *conto, float importo);

int main() {
    t_contoCorrente conto;

    conto.codice = "123456789";
    conto.saldo = 1000;

    printf("Saldo iniziale: %.2f\n", conto.saldo);

    deposito(&conto, 500);
    printf("Saldo dopo deposito: %.2f\n", conto.saldo);

    prelievo(&conto, 200);
    printf("Saldo dopo prelievo: %.2f\n", conto.saldo);

}


void deposito(t_contoCorrente *conto, float importo) {
    conto->saldo += importo;
}

void prelievo(t_contoCorrente *conto, float importo) {
    conto->saldo -= importo;
}