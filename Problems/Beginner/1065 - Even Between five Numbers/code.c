#include <stdio.h>
 
int main() {
 
    int num[5], cont;
    cont=0;
    for(int i=1; i<=5; i++){
        scanf("%d", &num[i]);
        if(num[i]%2==0){
            cont+=1; 
        }
    }
    printf("%d valores pares\n", cont);
 
    return 0;
}