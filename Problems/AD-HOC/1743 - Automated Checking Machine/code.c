#include <stdio.h>
 
int main() {
 
    int vetA[5], vetB[5], i, cont = 0;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &vetA[i]);
    }

    for(i = 0; i < 5; i++){
        scanf("%d", &vetB[i]);
    }

    for(i = 0; i < 5; i++){
        if(vetA[i] != vetB[i]){
            cont += 1;
        }
    }

    if(cont == 5){
        printf("Y\n");
    } else{
        printf("N\n");
    }
 
    return 0;
}