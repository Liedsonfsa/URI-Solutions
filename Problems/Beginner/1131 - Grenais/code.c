#include <stdio.h>
 
int main() {
 
    int g, i, cont=0, op, empate=0, inter=0, gremio=0;
    while(op!=2){
        scanf("%d%d",&i,&g);
        
        if(i>g){
            inter+=1;
        } else if(g>i){
            gremio+=1;
        } else{
            empate+=1;
        }
        cont+=1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&op);
    }

    printf("%d grenais\n",cont);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",empate);
    
    if(inter>gremio){
        printf("Inter venceu mais\n");
    } else if(gremio>inter){
        printf("Gremio venceu mais\n");
    } else{
        printf("Não houve vencedor\n");
    }
 
    return 0;
}