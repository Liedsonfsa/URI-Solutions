#include <stdio.h>
 
int main() {
 
    int n, i, m, in=0, ou=0;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        scanf("%d",&m);
        if(m>=10 && m<=20){
            in++;
        } else{
            ou++;
        }
    }
    
    printf("%d in\n",in);
    printf("%d out\n",ou);
    
    return 0;
}