#include <stdio.h>
#include <stdlib.h>

struct No{
    int dado;
    struct No * prox;
    struct No * ant;
};

struct No* criarNo(int dado){
    struct No* novo = (struct No*)malloc(sizeof(struct No));
    if (novo == NULL){
        printf("erro ao alocar memória");
        exit(1);
    }
    novo -> dado = dado;
    novo -> ant = NULL;
    novo -> prox = NULL;
};

// inserirInicio(&cabeca, valor);
void inserirInicio(struct No** cabeca, int dado){
    struct No*novo = criarNo(dado);
    if (*cabeca == NULL){
        *cabeca = novo;
        return;
    }
    else{
        novo -> prox = *cabeca;
        (*cabeca) -> ant = novo;
        *cabeca = novo;
        return;
    }
}

// inserirFim(&cabeca, valor);
void inserirFim(struct No** cabeca, int dado){
    struct No*novo = criarNo(dado);
    if (cabeca == NULL){
        *cabeca = novo;
        return;
    }
    else{
        struct No* aux = *cabeca;
        while (aux -> prox != NULL){
            aux = aux -> prox;
        }
        aux -> prox = novo;
        novo -> ant = aux;
    }
}
// inserirPosicao(&cabeca, valor, posicao);
void inserirPosicao(struct No** cabeca, int dado){
    struct No*novo = criarNo(dado);
    if (posicao == NULL){
        inserirFim(cabeca, dado);
        return;
    }
    else if (posicao == 1){
        inserirInicio(cabeca, dado);
        return;
    }
    else{
        struct No* aux = *cabeca;
        for (int i = 1; i < posicao && aux == NULL; i++){
            aux -> aux = prox;
        }
        
        novo -> ant = aux;
    }
    aux -> prox = novo;
    novo -> ant = aux;
}

int main(){
    struct No* cabeca=NULL;
    int valor, int posicao, int opcao;
    do{
        printf("\nMenu\n");
        printf("\n1- Inserir no início");
        printf("\n2- Inserir no fim");
        printf("\n3- Inserir na posição");
        printf("\n4- Remover no início");
        printf("\n5- Remover no fim");
        printf("\n6- Remover na posição");
        printf("\n7- Buscar o elemento");
        printf("\n8- Imprimir a lista completa");
        printf("\n0- para sair");
        printf("\nDigite a opção desejada:\t");
        scanf("%d", &opcao);

        if (opcao == 1){
            printf("digite o valor a ser inserido");
            scanf("%d", &valor);
            inserirInicio(&cabeca, valor);
            printf("O valor %d foi inserido no início\n", valor);
        }
        else if (opcao == 2){
            printf("digite o valor a ser inserido");
            scanf("%d", &valor);
            inserirFim(&cabeca, valor);
            printf("O valor %d foi inserido no início\n", valor);
        }
        else if (opcao == 3){
            printf("digite o valor a ser inserido");
            scanf("%d", &valor);
            printf("Insira a posição que deseja inserir");
            scanf("%d", &posicao);
            inserirPosicao(&cabeca, valor, posicao);
            printf("O valor %d foi inserido no início\n", valor);
        }while (opcao != 0);
    }
}