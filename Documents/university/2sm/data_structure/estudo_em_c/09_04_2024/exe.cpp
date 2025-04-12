#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v;
    v = (int *) malloc(10 * sizeof(int));
        //declara v como ptr e em seguida coloca a memória de v como um malloc com 10 * o tamanho de um int
    if (v == NULL){
        printf ("erro na alocação de memória");
        return 0;   //encerra o programa se a alocação de memória falhar
    }

    for (int i = 0; i < 10; i++){
        v[i] = i + 1;
    }

    for (int i = 0; i < 10; i++){
        printf("%d\n", v[i]);
    }
    printf ("\n");
    free(v);

    return 0;
}