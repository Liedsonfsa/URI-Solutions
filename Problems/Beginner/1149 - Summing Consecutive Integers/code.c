#include <stdio.h>
 
int main() {
 
    int a, n, soma=0;
    scanf("%d%d",&a,&n);

    if(n<=0){
        while(n<=0){
            scanf("%d",&n);
        }
    }
    
    for(int i=1; i<=n; i++){
        soma+=a;
        a+=1;
    }

    printf("%d\n",soma);
    
    return 0;
}