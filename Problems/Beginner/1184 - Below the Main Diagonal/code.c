#include <stdio.h>
 
int main() {
 
    int i, j, cont=0;
    float soma=0,  matriz[12][12];
    char op;
    scanf("%c",&op);
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&matriz[i][j]);
        }
    }
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(j<i){
                soma+=matriz[i][j];
                cont++;
            }
        }
    }
    
    if(op=='S'){
        printf("%.1f\n",soma);
    }
    if(op=='M'){
        printf("%.1f\n",soma/cont);
    }
    
    return 0;
}