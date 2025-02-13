#include <stdio.h>
 
int main() {
 
    int diametro, altura, largura, prof;
    scanf("%d",&diametro);
    scanf("%d%d%d", &altura, &largura, &prof);

    if(diametro <= altura && diametro <= largura && diametro <= prof){
        printf("S\n");
    }else{
        printf("N\n");
    }
    
    return 0;
}