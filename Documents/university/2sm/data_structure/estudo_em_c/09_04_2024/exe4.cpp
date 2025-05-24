#include <stdlib.h>
#include <stdio.h>

struct Livro
{
    char nome[30];
    char autor[30];
    int paginas;
    float preco;
};

int main(){
    int n;

    printf("quantos livros deseja cadastrar?\t");
    scanf("%d", &n);

    struct Livro *livros = (struct Livro*) malloc(n * sizeof(struct Livro));

    if (livros == NULL){
        printf ("erro na alocação de memória");
        return 0;   //encerra o programa se a alocação de memória falhar
    }

    for (int i = 0; i < n; i++){
        printf("digite o nome do livro (uma palavra):\n");
        scanf("%s", livros[i].nome);   //lê uma palavra sem espaços
        printf("Digite o nome do autor (uma palavra):\n");
        scanf("%s", livros[i].autor);
        printf("digite o número de páginas:\n");
        scanf("%d", &livros[i].paginas);
        printf("digite o preço do livro:\n");
        scanf("%f", &livros[i].preco);
    }

    printf("\n----------- livros cadastrados -----------\n");

    for (int i = 0; i < n; i++){
        printf("nome:\t%s\n", livros[i].autor);
        printf("autor:\t%s\n", livros[i].nome);
        printf("páginas:\t%d\n", livros[i].paginas);
        printf("preço:\t%.2f\n", livros[i].preco);
        printf("\n");

        if (n > 0){
            printf("próximo livro\n");
        }
    }

    free(livros);
    
    return 0;
}
