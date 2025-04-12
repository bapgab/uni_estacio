#include <stdio.h>

    int main(){

        int a, b, c, exf, med;

        printf("insira a primira nota, de 0 a 100:\n");
        scanf("%d", &a);

        printf("insira a segunda nota, de 0 a 100:\n");
        scanf("%d", &b);

        med = (a+b)/2;

        if (med >= 70){

            printf("você foi aprovado");
        }
        else if ((med <= 69) && (med >= 39)){
             printf("você está em exame final, insira a nota dele:\n");
            scanf("%d", &c);
            exf = med+c;
                if (exf >= 100){
                     printf("você foi aprovado");
                  }
                else{
                    printf("você foi reprovado");
                }
        }
        else{
            printf("nota insuficiente para exame final, você foi reprovado");
        }


        return 0;
    }