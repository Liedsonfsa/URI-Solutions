#include <stdio.h>
 
int main() {
 
    int v, n;
    
    while(scanf("%d%d", &v, &n) != EOF){
       printf("%d\n",(2 * v) * n);
    }
 
    return 0;
}