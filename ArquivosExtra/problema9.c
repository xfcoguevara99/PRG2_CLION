//
// Created by aluno on 01/04/25.
//

#include "problema9.h"

void escrever_arquivo(char* nome_arquivo){
  FILE *arquivo = fopen(nome_arquivo, "w");
  char frase[50];
  printf("Digite a frase:\n");
  scanf("%s", frase);
  if(arquivo == NULL){
    printf("Erro ao abrir arquivo\n");
    exit(1);
  }else{
    fputs(frase,nome_arquivo);

  }
  fclose(arquivo);
  }