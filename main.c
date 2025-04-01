#include <stdio.h>
#include "./ArquivosExtra/desafio1_leitura.c"
#include "./ArquivosExtra/problema2.c"
#include "./ArquivosExtra/problema3.c"
int main() {
    int *ponteiro,numero;
    numero = 10;
    printf("%d\n",numero);
    ponteiro = &numero;
    problema3(ponteiro);
    printf("%d\n",*ponteiro);
    return 0;
}
