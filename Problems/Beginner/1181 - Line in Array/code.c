#include <stdio.h>
 
int main() {
 
    int i, j, n, cont=0;
    float m[12][12], soma=0, media;
    char op;
    scanf("%d %c",&n,&op);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&m[i][j]);
        }
    }

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(i==n){
                soma+=m[n][j];
                cont+=1;
            }
        }
    }

    media=(float)soma/cont;
    if(op=='S'){
        printf("%.1f\n",soma);
    }

    if(op=='M'){
        printf("%.1f\n",media);
    }
    
    return 0;
}