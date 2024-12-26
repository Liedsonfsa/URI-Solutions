#include <stdio.h>
 
int main() {
 
    int NUMBER, HOURS;
    float SALARY;
    scanf("%d", &NUMBER);
    scanf("%d", &HOURS);
    scanf("%f", &SALARY);
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY*HOURS);
 
    return 0;
}