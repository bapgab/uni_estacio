#include <stdio.h>
//padrão. scanf, getchar, printf, puts
#include <curses.h>
//getch (oculta o que o user digita),  
#include <stdlib.h>

// *** PRIMEIRO EX ***

int main(int argc, char *argv[]){
  char nome[15];
  char sobrenome[15];
  //define a var nome [vetor] e sobrenome [vetor]

  printf("insira o nome\n");
  scanf(" %s", nome);
  getchar();
  //getchar para limpar a memória depois do enter

  printf("insira o sobrenome\n");
  fgets(sobrenome, 15, stdin);
  
  printf("%s %s\n", nome, sobrenome);

  return EXIT_SUCCESS;
}


// *** SEGUNDO EX ***

