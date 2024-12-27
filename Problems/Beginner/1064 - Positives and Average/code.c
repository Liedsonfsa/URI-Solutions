#include <stdio.h>
 
int main() {
    
    pos();
    
    return 0;
}

void pos() {
    int i, cont=0;
    float vetor[6], media=0, soma=0;
    for(i=0; i<6; i++){
        scanf("%f",&vetor[i]);
        if(vetor[i]>0){
            cont++;
            soma+=vetor[i];
            
        }
    }
    
    media=soma/cont;
    printf("%d valores positivos\n",cont);
    printf("%.1f\n",media);
}