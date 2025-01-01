#include <stdio.h>
 
int main() {
 
    int n, i, c=1, cont=1;
    scanf("%d",&n);

    while(cont<=n){
        for(i=1; i<=4; i++){
            if(i<4){
                printf("%d",c);
                printf(" ");
            }
            if(i==4){
                printf("PUM\n");
                c+=1;
                i=1;
                break;
            }
            c++;
        }
        cont++;
    }
    
    return 0;
}