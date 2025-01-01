#include <stdio.h>
 
int main() {
 
    int x, y, soma=0, n, cont=0;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        scanf("%d%d",&x,&y);

        while(cont<y){
            if(x%2!=0){
                soma+=x;
                cont+=1;
                
            }
            x+=1;
        }
        
        printf("%d\n",soma);
        soma=0;
        cont=0;
    }
 
    return 0;
}