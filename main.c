#include <stdio.h>
#include "./ArquivosExtra/desafio1_leitura.c"
#include "./ArquivosExtra/problema2.c"
#include "./ArquivosExtra/problema3.c"
#include "./ArquivosExtra/problema9.c"
int main() {
    char nome[50];
    printf("Digite o nome do arquivo:\n");
    scanf("%s",&nome);
    escrevendo_arquivo();
    return 0;
}
