#include <stdio.h>
 
int main() {
 
    int n, num, sum=0, cont, i=1, resul;
    scanf("%d",&n);

    for(cont=0; cont<n; cont++){
        scanf("%d",&num);
        
        for(i=1; i<num; i++){
            resul=num%i;
            if(resul==0){
                sum+=i;
            }
        }
        
        if(sum==num){
            printf("%d eh perfeito\n",num);
        }
        else{
            printf("%d nao eh perfeito\n",num);
        }
        
        sum=0;
    }
 
    return 0;
}