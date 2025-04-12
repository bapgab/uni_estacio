#include <stdio.h>
#define coluna 10
#define linha 10

int maze(){
    const char mat[linha][coluna];
    int i, j;
    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            if ((i < 10 && j == 0) || (j < 10 && j == 10)){
                mat[i][j] == 'x';
            } 
            else if (i = 0 && j < 10){
                mat[i][j] == 'x';
            }
            else{
                mat [i][j] == '.';
            }
        }
    }
    printf("%c", mat[i][j]);
}

int main(){
    int mat;
    printf("um explorador está preso e precisa encontrar a saída...\n\n\n\n");

    mat = maze();
}




// X paredes
// S início
// E saída
// . caminho