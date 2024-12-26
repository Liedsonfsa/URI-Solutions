#include <stdio.h>
 
int main() {
 
    int num;
    scanf("%d", &num);
    
    printf("%d ano(s)\n", num/365);
    num=num%365;

    printf("%d mes(es)\n", num/30);
    num=num%30;

    printf("%d dia(s)\n", num);

    return 0;
}