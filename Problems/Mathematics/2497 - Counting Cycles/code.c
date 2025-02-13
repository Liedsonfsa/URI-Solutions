#include <stdio.h>
 
int main() {
 
    int n, resto, i = 1;

    while(n != -1){
        scanf("%d", &n);
        if(n == -1){
            break;
        } else{
            resto = n / 2;
            printf("Experiment %d: %d full cycle(s)\n", i, resto);
            i += 1;
        }
    }
 
    return 0;
}