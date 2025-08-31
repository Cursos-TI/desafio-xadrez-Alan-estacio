#include <stdio.h>
 
int main() {
    int t;
    int c;
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
printf("ESQUERDA\n", r);
r++;
}
    while (r<8);
    printf("CAVALO MOVE-SE:\n");
for ( c = 1; c <=2; c++) {
    printf("ABAIXO\n", c);
}
  c = 0;
    while (c<1){
     printf("ESQUERDA\n", c);
     c++;
    }
    return 0;
}