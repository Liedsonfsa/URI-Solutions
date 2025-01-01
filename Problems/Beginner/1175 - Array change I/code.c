#include<stdio.h>

int main() {
    
    int vetorA[20], vetorB[20], i, j=0; 
    
    for(i=0;i<20;i++){
        scanf("%d",&vetorA[i]);
    }
    
    for(i=20-1;i>=0;i--){
        vetorB[i]=vetorA[i];
    }
    
    for(i=20-1;i>=0;i--){
        printf("N[%d] = %d\n",j,vetorB[i]);
        j++;
    }
    
    return 0;
}