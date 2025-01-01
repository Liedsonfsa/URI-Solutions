#include <stdio.h>
 
int main() {
 
    int x, y, maior, menor, i, soma=0;
    
    scanf("%d %d",&x,&y);
    
    maior=(x>y) ? x : y;
    menor=(x<y) ? x : y;
    
    for(i=menor; i<=maior; i++){
        if(i%13!=0){
            soma+=i;
        }
    }
    
    printf("%d\n",soma);
 
    return 0;
}