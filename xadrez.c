#include <stdio.h>

int main(){
  int torre, bispo, rainha; //variavéis de controle


  //lógica de movimentação da torre
  printf("A torre pode se mover tanto na horizontal quanto na vertical\n");
  printf("A torre moverá 5 casas para a direita\n");

  //Loop for para 5 movimentos da torre 
  for (torre = 1; torre <= 5; torre++){
    printf("A torre se moveu para a direita\n");
  }

  //lógica de movimentação do bispo
  printf("O bispo pode se mover na diagonal\n");
  printf("O bispo moverá 5 casas para a diagonal\n");

  //Loop for para 5 movimentos do bispo
  for (bispo = 1; bispo <= 5; bispo++){
    printf("O bispo se moveu para cima,direita\n");
  }

  //lógica de movimentação da rainha
  printf("A rainha pode se mover para todas as direções\n");
  printf("A rainha moverá 8 casas para a esquerda\n");

  //Loop for para 8 movimentos da rainha
  for (rainha = 1; rainha <= 8; rainha++){
    printf("A rainha se moveu para a esquerda\n");
  }

  return 0;
}    