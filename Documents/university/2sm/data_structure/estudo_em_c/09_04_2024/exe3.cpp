#include <stdio.h>
#include <stdlib.h>

struct Livro{
    char nome[30];
    char autor[30];
    int paginas;
    float preco;
};

int main(){

    struct Livro livro1;
    
    printf("digite o nome do livro (uma palavra):\n");
    scanf("%s", livro1.nome);   //lê uma palavra sem espaços

    printf("Digite o nome do autor (uma palavra):\n");
    scanf("%s", livro1.autor);

    printf("digite o número de páginas:\n");
    scanf("%d", &livro1.paginas);

    printf("digite o preço do livro:\n");
    scanf("%f", &livro1.preco);

    printf("informações do livro:\n");
    printf("nome:\t%s\n", livro1.autor);
    printf("autor:\t%s\n", livro1.nome);
    printf("páginas:\t%d\n", livro1.paginas);
    printf("preço:\t%f\n", livro1.preco);
}
