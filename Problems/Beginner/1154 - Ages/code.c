#include <stdio.h>
 
int main() {

    int n, q=0;
    float soma=0, m;
    while(scanf("%d",&n)!=0){
        if(n<0){
            break;
        } else{
            soma+=n;
            q++;
        }
    }
    
    m=(float)soma/q;
    printf("%.2f\n",m);
   
    return 0;
}