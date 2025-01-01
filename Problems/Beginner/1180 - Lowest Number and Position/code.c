#include <stdio.h>

int main() {
 
    int n;
    scanf("%d",&n);
    
    int vetor[n], i, me, pos;
    for(i=0; i<n; i++){
        scanf("%d",&vetor[i]);
    }
    
    me=vetor[0];
    pos=0;
    
    for(i=0; i<n; i++){
       if(vetor[i]<me){
           me=vetor[i];
           pos=i;
       } 
    }
    
    printf("Menor valor: %d\n",me);
    printf("Posicao: %d\n",pos);
 
    return 0;
}