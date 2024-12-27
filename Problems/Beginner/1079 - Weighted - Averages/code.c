#include <stdio.h>
 
int main() {
 
    int n, cont=0;
    float media, n1, n2, n3;
    scanf("%d",&n);
    
    while(cont<n){
        scanf("%f %f %f",&n1,&n2,&n3);
        
        media=(n1*2+n2*3+n3*5)/10;
        
        printf("%.1f\n",media);
        cont+=1;
    }
    
    return 0;
}