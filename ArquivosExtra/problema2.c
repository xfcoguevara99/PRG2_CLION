//
// Created by aluno on 28/03/25.
//

#include "problema2.h"

void desafio2(){
  int lista[] = {0,1,2,3,4};
  int* ponteiro;
  ponteiro = &lista[0];
  for(int i = 0;i<sizeof(lista)/sizeof(int);i++){
    printf("Eemento: %d",*(ponteiro++));
  }




  }