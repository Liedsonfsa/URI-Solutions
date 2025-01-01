#include <stdio.h>
 
int main() {
 
    int i, n, vetor[10], dobro;
    scanf("%d",&n);
    
    vetor[0]=n;
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n",i,vetor[i]);
        vetor[i+1]=vetor[i]*2;
    }
 
    return 0;
}