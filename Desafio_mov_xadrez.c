#include <stdio.h>

int main(){
        //Torre!

        int mt = 1;
        int mb = 1;
        int mr = 1;

        do
        {
            printf("A torre anda para direita!\n");
            mt++;
        } while ( mt <= 5 );
        

        //Bispo!

        while (mb <=5 )
        {
            printf("O Bispo anda para cima e para direita!\n");
            mb++;
        }
        

        //Rainha!

        for (int mr = 1; mr <= 8; mr++)
        {
            printf("A rainha anda para esquerda!\n");
        }
        




    return 0;
}