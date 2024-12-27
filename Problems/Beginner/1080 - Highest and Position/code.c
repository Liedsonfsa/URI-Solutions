#include <stdio.h>
 
int main() {
    
    ver();
    
    return 0;
}

void ver() {
    int vetor[100], i, maior, pos;
    for(i=0; i<100; i++){
        scanf("%d",&vetor[i]);
    }
    
    maior=vetor[0];
    for(i=1; i<100; i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            pos=i;
        }
    }
    
    printf("%d\n",maior);
    printf("%d\n",pos+1);
}