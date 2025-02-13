#include <stdio.h>
int main()
{
    int n, i, j, m;

    scanf("%d",&n);

    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d %d", &j, &m);
        vetor[i] = (j * m) / 2;
    }

    for(i = 0; i < n; i++){
        printf("%d cm2\n", vetor[i]);
    }

    return 0;
}
