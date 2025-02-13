#include <stdio.h>
#include <math.h>
 
int main() {
 
    int retB, retC, retR, n, m, x, cont = 1;
    scanf("%d",&n);
    
    while(cont<=n){
        scanf("%d%d",&m,&x);
        retC = carlos(m,x);
        retR = rafa(m,x);
        retB = beto(m,x);
        
        if(retC > retB && retC > retR) printf("Carlos ganhou\n");
        if(retB > retC && retB > retR) printf("Beto ganhou\n");
        if(retR > retC && retR > retB) printf("Rafael ganhou\n");
        cont += 1;
    }
 
    return 0;
}

int beto(int x, int y){
    int b;
    b = (2 * pow(x,2)) + pow(5 * y,2);
    
    return b;
}

int rafa(int x, int y){
    int r;
    r = pow((3 * x),2) + pow(y,2);
    
    return r;
}

int carlos(int x, int y){
    int c;
    c = -100 * x + pow(y,3);
    
    return c;
}