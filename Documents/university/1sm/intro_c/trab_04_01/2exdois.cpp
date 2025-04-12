#include <stdio.h>

    int main(){
        int ndec;

        printf("insira o valor em decimal");
        scanf("%d", &ndec);


        printf("o número em octal: %o\n", ndec);
        printf("o número em hexadecimal: %x\n", ndec);
                                                        //Para calcular o número em octal e exadecimal, respectivamente, digite %o e %x

        return 0;
    }