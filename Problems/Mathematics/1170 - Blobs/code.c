#include <stdio.h>
 
int main() {
 
    int n, cont = 0, dias = 0;
    float q;
    scanf("%d",&n);

    while(cont < n){
        scanf("%f",&q);
        
        while(q > 1){
            q/=2;
            dias++;
        }

        printf("%d dias\n",dias);
        cont += 1;
        dias = 0;
    }   
 
    return 0;
}