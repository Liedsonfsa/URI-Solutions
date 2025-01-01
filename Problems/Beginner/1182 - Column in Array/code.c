#include <stdio.h>
 
int main() {
 
    int i, j, cont=0, n;
    float matriz[12][12], soma=0;
    char op;
    scanf("%d %c",&n,&op);
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&matriz[i][j]);
        }
    }
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(j==n){
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