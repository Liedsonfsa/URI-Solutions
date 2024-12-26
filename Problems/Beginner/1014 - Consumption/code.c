#include <stdio.h>

 
int main() {
 
    float l, km=0;
    int k;
    scanf("%d",&k);
    scanf("%f",&l);

    km=(float)k/l;
    printf("%.3f km/l\n",km);
    
    return 0;
}

