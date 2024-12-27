#include <stdio.h>

int main() {

    int x, y, i, soma=0, max, min;

    scanf("%d %d",&x,&y);

    if(x<y){
        min=x;
        max=y;
    } else{
        max=x;
        min=y;

    }

    for(i=(min+1); i<max; i++){
        if(i%2!=0){
            soma+=i;
        }

    }

    printf("%d\n",soma);
    
    return 0;
}
