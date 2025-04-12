#include <stdio.h>
#include <stdlib.h>

struct Dados
{
    char nome[20];
    float alt;
    int idade;
};

int main(){

    struct Dados cdados;
    
    printf("insira seu nome:\t");
    scanf("%s", cdados.nome);
    printf("insira a sua altura:\t");
    scanf("%f", &cdados.alt);
    printf("insira a sua idade:\t");
    scanf("%d", &cdados.idade);

    printf("os dados inseridos foram:\n");
    printf("nome: %s\n", cdados.nome);
    printf("altura: %.2f\n", cdados.alt);
    printf("idade: %d\n", cdados.idade);

}
