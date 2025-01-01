#include <stdio.h>
 
int main() {
 
    float mat[100];
    int i;
    
    for(i=0; i<100; i++){
        scanf("%f",&mat[i]);
    }
    
    for(i=0; i<100; i++){
        if(mat[i]<=10){
            printf("A[%d] = %.1f\n", i, mat[i]);
        }
    }
 
    return 0;
}