//
// Created by aluno on 28/03/25.
//
#include <stdio.h>
#include <stdlib.h>
#include "desafio1_leitura.h"
typedef struct
{
    char nome[80];
    int idade;
}pessoa;
void leitura_arquivo(){
    FILE *arquivo;
    pessoa p;
    int contador=0;
    if ((arquivo = fopen("/home/aluno/Downloads/PRG2_CLION/ArquivosExtra/contatos.bin", "rb")) != NULL) {
        while (!feof(arquivo)) {
            fread(&p, sizeof(p), 1, arquivo);

            if (!feof(arquivo)) {
                printf("nome: %s\t idade: %d\n",p.nome, p.idade);
                contador++;
            }
        }
    }else{
        fprintf(stderr, "Erro: arquivo nao pode ser aberto\n");
        exit(EXIT_FAILURE);
    }
    printf("Numero de contatos: %d",contador);
    fclose(arquivo);
}
