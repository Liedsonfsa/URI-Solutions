#include <stdio.h>

int factorial(int number);

int main() {
    int n, resul;
    scanf("%d",&n);
    
    resul=factorial(n);
    
    printf("%d\n",resul);
}

int factorial(int number) {
    if(number <=1){
        return 1;
    } else{
        return (number * factorial(number -1));
    }
}