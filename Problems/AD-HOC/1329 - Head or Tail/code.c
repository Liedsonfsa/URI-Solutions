#include <stdio.h>

int main() {

    int n, x;
    int mary = 0, john = 0;
    scanf("%d", &n);

    while(n != 0){
        mary = 0;
        john = 0;

        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            if(x == 0){
                mary++;
            } else{
                john++;
            }
        }

        printf("Mary won %d times and John won %d times\n", mary, john);
        scanf("%d", &n);
    }
      
    return 0;
}