#include <stdio.h>
 
int main() {
 
    int inicio, fim, resul;
    scanf("%d%d",&inicio,&fim);
    
    if(inicio<fim){
        resul=fim-inicio;
    } else if(inicio==fim){
        resul=24;
    } else{
        resul=(24-inicio)+fim;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n",resul);
 
    return 0;
}