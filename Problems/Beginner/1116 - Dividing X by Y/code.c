#include <stdio.h>
 
int main() {
 
    int n, i=0;
    float  x, y, resul;
    
    scanf("%d",&n);
    
    while(i<n){
        scanf("%f%f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        } else{
            resul=x/y;
            printf("%.1f\n",resul);   
        }
        i+=1;
    }
    
    return 0;
}