#include <stdio.h>
 
int main() {
 
    int X, Y;
    float Total;
    scanf("%d", &X);
    scanf("%d", &Y);
    
    switch(X){
        case 1:
            Total=(float)(Y*4);
            break;
        case 2:
            Total=(float)(Y*4.50);
            break;
        case 3:
            Total=(float)(Y*5);
            break;
        case 4:
            Total=(float)(Y*2);
            break;
        case 5:
            Total=(float)(Y*1.50);
            break;                      
    }
    printf("Total: R$ %.2f\n", Total);
 
    return 0;
}