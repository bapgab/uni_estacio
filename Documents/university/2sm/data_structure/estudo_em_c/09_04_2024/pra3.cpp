#include <stdio.h>
#include <stdlib.h>

struct Carro
{
    char marca[15];
    char modelo[15];
    int ano;
};

int main(){
    struct Carro dcarros;

    printf("insira a marca do carro:\t");
    scanf("%s", dcarros.marca);
    printf("insira o modelo do carro:\t");
    scanf("%s", dcarros.modelo);
    printf("insira o ano do carro:\t");
    scanf("%d", &dcarros.ano);

    printf("os dados inseridos foram:\n");
    printf("marca: %s\n", dcarros.marca);
    printf("modelo: %s\n", dcarros.modelo);
    printf("ano: %d\n", dcarros.ano);

    return 0;
}