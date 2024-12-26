#include <stdio.h>
 
int main() {
 
    float code1, quant1, valor1, code2, quant2, valor2, valorTotal;
    valorTotal=0;

    scanf("%f %f %f",&code1, &quant1, &valor1);
    scanf("%f %f %f",&code2, &quant2, &valor2);
    
    valorTotal=quant1*valor1+quant2*valor2;
    printf("VALOR A PAGAR: R$ %.2f\n",valorTotal);
 
    return 0;
}