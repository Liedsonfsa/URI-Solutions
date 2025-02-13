#include <stdio.h>
 
int main() {
 
    int n, latas, copos, cont = 0, soma = 0;
    scanf("%d", &n);

    while(cont < n){
        scanf("%d%d", &latas, &copos);
        if(latas > copos){
            soma += copos;
        }
        
        cont++;
    }
    
    printf("%d\n", soma);
 
    return 0;
}