#include <stdio.h>
 
int main() {
 
    int i, array[10], l=0;
    
    for(i=0; i<10; i++){
        scanf("%d",&array[i]);
        
        if(array[i]<=0){
            array[i]=1;
        }
    }
    
    for(i=0; i<10; i++){
        printf("X[%d] = %d\n",i,array[l]);
        l++;
    }
    
    return 0;
}