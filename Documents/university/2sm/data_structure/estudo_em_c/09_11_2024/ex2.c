#include <stdio.h>
#include <stdlib.h>

struct Dados{
    char nome [10];
    char end [20];
    int idade;
};

int main(){
    struct Dados *cdados = (struct Dados*) malloc (1 * sizeof(struct Dados));
    printf("insira seu nome:\t");
    scanf ("%s", cdados->nome);
    printf("insira seu endereço (sem espaçamento)\t");
    scanf("%s", cdados->end);
    printf("insira a sua idade:\t");
    scanf("%d", &cdados->idade);
    printf("dados inseridos\n");
    printf("%s\n%s\n%d", cdados->nome, cdados->end, cdados->idade);
}
