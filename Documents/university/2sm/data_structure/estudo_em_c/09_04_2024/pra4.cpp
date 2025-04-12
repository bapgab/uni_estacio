#include <stdio.h>
#include <stdlib.h>

struct Carro
{
    char marca[15];
    char modelo[15];
    int ano;
};

int ncars(){
    int ndc;
    printf("insira quantos carros serão cadastrados\n");
    scanf("%d", &ndc);
    return ndc;
}

int main(){

    int ndc = ncars();

    struct Carro *dcarros = (struct Carro*) malloc (ndc * sizeof(struct Carro));

    if (dcarros == NULL){
        printf ("erro na alocação de memória");
        return 0;   //encerra o programa se a alocação de memória falhar
    }

    for (int i = 0; i < ndc; i++){
        printf("insira a marca do carro:\t");
        scanf("%s", dcarros[i].marca);
        printf("insira o modelo do carro:\t");
        scanf("%s", dcarros[i].modelo);
        printf("insira o ano do carro:\t");
        scanf("%d", &dcarros[i].ano);
    }

    for (int i = 0; i < ndc; i++){
        printf("os dados inseridos foram:\n");
        printf("marca: %s\n", dcarros[i].marca);
        printf("modelo: %s\n", dcarros[i].modelo);
        printf("ano: %d\n", dcarros[i].ano);
    }

    free(dcarros);

    return 0;
}