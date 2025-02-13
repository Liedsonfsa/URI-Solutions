#include <stdio.h>
 
int main() {
 
    int x, y;

    while(x != 0 && y != 0){
        scanf("%d%d", &x, &y);

        if(x == 0  && y == 0) break;
        printf("%d\n", x + y);
    }
 
    return 0;
}
