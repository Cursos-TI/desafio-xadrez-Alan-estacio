#include <stdio.h>
 
int main() {
    int t;
    //torre se move 5 casas para direita
     printf("TORRE MOVE-SE PARA:\n");
    for ( t = 1; t <= 5; t++) {
            printf("Direita\n", t);
        }
    printf("BISPO MOVE-SE PARA:\n"); //bispo se move 5 casas para cima na direita
    
    int b = 0;
    while (b<5){
     printf("CIMA, DIREITA\n", b);
     b++;
    }

    printf("A RAINHA MOVE-SE:\n"); //a rainha se move 8 casas para esquerda
int r = 0;
do{
printf("Esquerda\n", r);
r++;
}
    while (r<8);
     
    return 0;
}