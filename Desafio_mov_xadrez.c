#include <stdio.h>

int main(){
        //Torre!

        int mt = 1;
        int mb = 1;
        int mr = 1;
        int mc = 1;

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
        

        //Cavalo!

        while (mc == 1)
        {
            for ( mc = 0; mc <= 2; mc++)
            {
                printf("O cavalo anda para baixo!\n");
                mc++;
            }
            printf("O cavalo anda para a esquerda!\n");
            
        }
        



    return 0;
}
