#include <stdio.h>
//funções recursivas para a torre, rainha e bispo
void movertorre(int casas){
    if (casas > 0){
        printf("A torre se moveu para a direita\n");
        movertorre(casas - 1);
    }
  }

void moverrainha(int casas){
    if (casas > 0){
        printf("A rainha se moveu para a esquerda\n");
        moverrainha(casas - 1);
    }
}

void moverbispo(int casas){
    if(casas > 0){
        printf("O bispo se moveu para cima,direita\n");
        moverbispo(casas - 1);
    }
}

int main(){
    int movimentocompleto = 1;
    
    //movimento da torre
    printf("A torre pode se mover tanto na horizontal quanto na vertical\n");
    printf("A torre moverá 5 casas para a direita\n");
    movertorre(5);

    //movimento da rainha
    printf("A rainha pode se mover para todas as direções\n");
    printf("A rainha moverá 8 casas para a esquerda\n");
    moverrainha(8);

    //movmento do bispo 
    printf("O bispo pode se mover na diagonal\n");
    printf("O bispo moverá 5 casas para a diagonal\n");
    moverbispo(5);

    //movimento do cavalo em L
    //o cavalo pode se mover em L no tabuleiro
    while(movimentocompleto--)
{
  for (int i = 0; i < 2; i++)
  {
    printf("O cavalo se moveu para para baixo\n");
  }

    printf("O cavalo se moveu para para esquerda\n");
}

    
  return 0;
}    