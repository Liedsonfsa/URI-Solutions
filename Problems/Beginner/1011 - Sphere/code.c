#include <stdio.h>
#include <math.h>
 
int main() {
 
    double volume, pi, R;
    pi=3.14159;
    scanf("%lf",&R);
    volume=(4.0/3.0)*pi*pow(R,3);
    printf("VOLUME = %.3f\n", volume);
 
    return 0;
}