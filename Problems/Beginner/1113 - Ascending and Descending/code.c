#include <stdio.h>
 
int main() {
 
    ver();
 
    return 0;
}

void ver() {
    int a, b;
    while(a!=b){
        scanf("%d %d",&a,&b);
        
        if(a>b){
           printf("Decrescente\n");
        } else if(a<b){
           printf("Crescente\n");
        }
   }
}