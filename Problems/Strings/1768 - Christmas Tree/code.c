#include <stdio.h>

int main() {

    int n;
    while(scanf("%d",&n) != EOF){
        int x = n/2+1;

        for(int i = 1; i <= x; i++){
            for(int j = i; j <= n/2; j++)
                printf(" ");
            int p = 2 * i - 1;
            for(int s = 1; s <= p; s++)
                printf("*"); 
            printf("\n");
        }
        
        int cont = 1;
        while(cont <= 2){
            for(int j = cont; j <= n/2; j++)
                printf(" ");
            int p = 2 * cont - 1;
            for(int c = 1; c <= p; c++)
                printf("*");  
            printf("\n");
            cont++;
        }
        printf("\n");
    }

    return 0;
}