#include <string.h>
#include <stdio.h>

int main(){
    int n, l, hash;
    char frase[51];

    scanf("%d", &n);
    for(int k = 0; k < n; ++k){
        hash = 0;
        scanf("%d\n", &l);

        for(int i = 0; i < l; ++i){
            scanf("%s\n", &frase);

            for(int j = 0; j < strlen(frase); ++j){
                hash += (frase[j] - 'A') + i + j;
            }
        }

        printf("%d\n", hash);
    }

    return 0;
}