#include <stdio.h>
 
int main() {
 
    int c, n, cont = 0, i = 0;
    float media, porc, sum = 0;
    scanf("%d",&c);

    while(i < c){
        scanf("%d",&n);
        int vet[n];
        for(int j = 0; j < n; j++){
            scanf("%d",&vet[j]);
            sum += vet[j];
        }

        media = sum / n;
        for(int j = 0; j < n; j++){
            if(vet[j] > media){
                cont++;
            }
        }

        porc = (float)(cont * 100) / n;
        printf("%.3f%%\n",porc);
        
        sum = 0;
        porc = 0;
        media = 0;
        cont = 0;
        i += 1; 
    }
    
    return 0;
}