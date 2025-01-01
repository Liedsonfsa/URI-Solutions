#include <stdio.h>

int main () {
    int a, n, j, k, i, l, m=1;
    scanf("%d %d",&a,&n);
    
    k= n/a;
    l=a;
    
    for(i=1; i<=k; i++){
        printf("%d",m);
        for(j=m+1; j<=l; j++)
            printf(" %d",j);
        
        printf("\n");
        m+=a;
        l+=a;
    }

    return 0;
}
