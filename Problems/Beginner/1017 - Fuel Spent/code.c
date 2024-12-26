#include <stdio.h>
 
int main() {
 
   int tempo, velocidade;
   float comb, distancia;;
   scanf("%d%d",&tempo,&velocidade);

   distancia=(float)velocidade*tempo;
   comb=(float)distancia/12;

   printf("%.3f\n",comb);
 
    return 0;
}