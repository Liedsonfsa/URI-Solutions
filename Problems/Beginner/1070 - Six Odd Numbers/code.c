#include <stdio.h>

int main() {

    int x, cont=0;

    scanf("%d",&x);

    while(cont<6){
        if(x%2!=0){
            printf("%d\n",x);
            cont=cont+1;
        }
        x=x+1;

    }
  
    return 0;
}