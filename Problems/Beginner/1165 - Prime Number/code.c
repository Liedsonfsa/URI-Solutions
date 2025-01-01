#include <stdio.h>
 
int main() {
 
    int n, i, cont=0, q, c=0;
    scanf("%d",&q);

    while(c<q){
        scanf("%d",&n);
       
        for(i=1; i<=n; i++){
            if(n%i==0){
                cont+=1;
            }
        }
        if(cont==2){
            printf("%d eh primo\n",n);
        } else{
            printf("%d nao eh primo\n",n);
        }
        cont=0;
        c+=1;
    }
 
    return 0;
}