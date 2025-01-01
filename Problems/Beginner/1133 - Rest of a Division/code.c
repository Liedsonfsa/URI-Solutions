#include <stdio.h>
 
int main() {
 
    int x, y, maior, menor, i;
    
    scanf("%d %d",&x,&y);
    
    maior=(x>y) ? x : y;
    menor=(x<y) ? x : y;
    
    for(i=menor+1; i<maior; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
 
    return 0;
}