#include <stdio.h>

int main() {
    int i, v[46], n;
    
    scanf("%d",&n);
    
    v[0] = 0;
    v[1] = 1;
    
    printf("%d %d ",v[0],v[1]);
    
    for(i=2; i<n; i++){
        v[i] = v[i-1] + v[i-2];
        if(i == n-1){
            printf("%d\n",v[i]);
        } else{
            printf("%d ",v[i]);
        }
    }
    
    return 0;
}