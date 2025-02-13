#include <stdio.h>
 
int main() {
 
    int n, maior;
    maior = 0;
    
    while(n != 0){
        scanf("%d", &n);
        if(n > maior){
            maior = n;
        }
    }
    
    printf("%d\n", maior);
    
    return 0;
}