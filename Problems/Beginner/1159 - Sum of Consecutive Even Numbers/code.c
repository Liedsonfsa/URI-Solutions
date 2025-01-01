#include <stdio.h>
 
int main() {
 
    int n, cont=0, sum=0;
    while(n!=0){
        scanf("%d",&n);
        
        if(n==0){
            break;
        } else{
            while(cont<5){
                if(n%2==0){
                    sum+=n;
                    cont+=1;
                    
                }
                n+=1;
            }
        }

        printf("%d\n",sum);
        cont=0;
        sum=0;
    }
    
    return 0;
}