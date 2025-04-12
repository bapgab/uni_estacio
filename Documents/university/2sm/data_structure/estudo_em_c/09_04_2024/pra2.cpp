#include <stdio.h>
#include <stdlib.h>


struct Dados
{
    char nome[20];
    float alt;
    int idade;
};

int ndados (){
    int rnp;
    printf("digite a quantidade de pessoas que serão cadastradas:\n");
    scanf("%d", &rnp);
    return rnp;
}


int main(){

    int np = ndados();

    struct Dados *cdados = (struct Dados*) malloc (np * sizeof(struct Dados));

    if (cdados == NULL){
        printf ("erro na alocação de memória");
        return 0;   //encerra o programa se a alocação de memória falhar
    }
    
    for (int cont = 0; cont < np; cont++){
        printf("insira seu nome:\t");
        scanf("%s", cdados[cont].nome);
        printf("insira a sua altura:\t");
        scanf("%f", &cdados[cont].alt);
        printf("insira a sua idade:\t");
        scanf("%d", &cdados[cont].idade);
    }

    for (int cont = 0; cont != np; cont++){
        printf("\nos dados inseridos foram:\n");
        printf("nome: %s\n", cdados[cont].nome);
        printf("altura: %.2f\n", cdados[cont].alt);
        printf("idade: %d\n", cdados[cont].idade);
    }

    free(cdados);

}
