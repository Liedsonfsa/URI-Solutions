#include <stdio.h>
#include <math.h>

int main(){

    int n, c, i;
    scanf("%d",&n);

    for(i = 0; i < n; i++) {
        scanf("%d",&c);
        printf("%lld kg\n",(long long)(pow(2,c)/12000));
    }

    return 0;
}