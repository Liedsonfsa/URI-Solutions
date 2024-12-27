#include <stdio.h>
 
int main() {
 
    int n, m, maior, menor;
    
    scanf("%d %d",&n,&m);
    if(n>m){
        maior=n;
        menor=m;
    } else{
        maior=m;
        menor=n;
    }
    
    if(maior%menor==0){
        printf("Sao Multiplos\n");
    } else{
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}