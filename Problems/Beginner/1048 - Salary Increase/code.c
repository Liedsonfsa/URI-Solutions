#include <stdio.h>
 
int main() {
 
    float salario, reajuste, nsalario;
    int per;
    scanf("%f",&salario);

    if(salario>=0 && salario<=400){
        per=15;
        nsalario=salario+(salario*0.15);
        reajuste=nsalario-salario;
    } else if(salario>400 && salario<=800){
        per=12;
        nsalario=salario+(salario*0.12);
        reajuste=nsalario-salario;
    } else if(salario>800 && salario<=1200){
        per=10;
        nsalario=salario+(salario*0.10);
        reajuste=nsalario-salario;
    } else if(salario>1200 && salario<=2000){
        per=7;
        nsalario=salario+(salario*0.07);
        reajuste=nsalario-salario;
    } else if(salario>2000){
        per=4;
        nsalario=salario+(salario*0.04);
        reajuste=nsalario-salario;
    }
    
    printf("Novo salario: %.2f\n",nsalario);
    printf("Reajuste ganho: %.2f\n",reajuste);
    printf("Em percentual: %d %%\n",per);
 
    return 0;
}