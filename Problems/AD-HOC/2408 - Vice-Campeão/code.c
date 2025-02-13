#include <stdio.h>
 
int main() {
 
    int vet[3], i, j, aux;
    scanf("%d%d%d", &vet[0], &vet[1], &vet[2]);

    for(i = 0; i < 3; i++){
        for(j = i+1; j < 3; j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    
    printf("%d\n",vet[1]);
 
    return 0;
}