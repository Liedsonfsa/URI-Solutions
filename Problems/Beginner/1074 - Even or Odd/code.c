#include <stdio.h>
 
int main() {
 
    int n, x;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&x);

        if(x%2!=0 && x<0){
            printf("ODD NEGATIVE\n");
        } else if(x%2!=0 && x>0){
            printf("ODD POSITIVE\n");
        } else  if(x%2==0 && x<0){
            printf("EVEN NEGATIVE\n");
        } else if(x%2==0 && x>0){
            printf("EVEN POSITIVE\n");
        } else{
            printf("NULL\n");
        }
        
    }
 
    return 0;
}