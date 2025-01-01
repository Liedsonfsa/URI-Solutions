#include <stdio.h>
 
int main() {
 
    int n, vetor[1000], i, x=0;
    scanf("%d",&n);
    
    for(i=0; i<1000; i++){
        if(x<=n-1){
            printf("N[%d] = %d\n",i, x);
            x++;
            if(x>n-1){
                x=0;
            }
        }
    }

    return 0;
}