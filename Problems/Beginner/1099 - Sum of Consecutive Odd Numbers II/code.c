#include <stdio.h>
 
int main() {
    sum();

    return 0;
}

void sum() {
    int n, soma, i=1, a, b, ma, me;
    scanf("%d",&n);

    while(i<=n){
        soma=0;
        scanf("%d %d",&a,&b);
        if(a>b){
            ma=a;
            me=b;
        } else if(a<b){
            ma=b;
            me=a;
        } else{
            ma=a;
            me=b;
        }
        
        for(int j=me+1; j<ma; j++){
            if(j%2!=0){
                soma=soma+j;
            }
        }
        printf("%d\n",soma);
        i=i+1;
    }
}