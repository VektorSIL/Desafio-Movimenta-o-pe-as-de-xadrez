#include <stdio.h>

//Torre!

void mt(int casas){
    if (casas > 0)
    {
        printf("A torre se moce para direita!\n");
        mt(casas -1);
    }
}

//Rainha!

void mr(int casas){
    if (casas > 0)
    {
        printf("A rainha se move para esquerda!\n");
        mr(casas - 1);
    }
    
}

//Bispo

void mb(int casas){
    for (int v = 1; v <= 5; v++)
    {
        printf("O bispo se move para cima!\n");
        for (int h = 1; h <=1; h++)
        {
            printf("O bispo se move para direita! \n");
        }
    }
    
}


int main(){

    mt (5);
    mr (8);
    mb (5);

    //Cavalo!

    for (int c = 0; c < 2; c++) {
      printf("O cavalo se move para cima!\n");
    
      if (c == 2 - 1) { 
        for (int l = 0; l < 1; l++) {
            printf("O cavalo se move para a direita!\n");
        }
      }
    }
    return 0;
}

