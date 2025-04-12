#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[20];
    char curso [10];
    int nmatri;
    
};

int main(){
    struct Aluno *dalunos = (struct Aluno*) malloc (5 * sizeof(struct Aluno));
    for (int i = 0; i < 5; i++){
        printf("insira os dados do aluno %d\n", i+1);
        printf("nome\n");
        scanf ("%s", dalunos[i].nome);
        printf("curso\n");
        scanf("%s", dalunos[i].curso);
        printf("matricula\n");
        scanf("%d", &dalunos[i].nmatri);
    }
    printf("os dados inseridos:\n\n");

    for (int i = 0; i < 5; i++){
        printf("%s\n", dalunos[i].nome);
        printf("%s\n", dalunos[i].curso);
        printf("%d\n\n", dalunos[i].nmatri);
    }

}
