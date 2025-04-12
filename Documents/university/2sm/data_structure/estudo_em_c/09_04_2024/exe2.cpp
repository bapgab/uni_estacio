#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int i, n;   //declara o contador (i) e a variavel que vai receber a quantidade de números que serão digitados

    printf ("digite o número de elementos\t");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));
        //declara ptr como ptr e em seguida coloca a memória de v como um malloc com 10 * o tamanho de um int

    if (ptr == NULL){
        printf ("erro na alocação de memória");
        return 0;   //encerra o programa se a alocação de memória falhar
    }

    printf("digite os valores dos elementos\n");
    for (i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }

    printf("os valores digitados foram\n");
    for (i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }

    printf ("\n");
    free(ptr);

    return 0;
}