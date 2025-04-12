#include <stdio.h>

    int main(){

        float peso, alt, imc;

        printf("insira o peso\n");
        scanf("%f", &peso);

        printf("insira sua altura\n");
        scanf("%f", &alt);

        imc = peso / (alt*alt);
        printf("%.2f", imc);

        if (imc < 18,5){

            printf("abaixo do peso");
        }
        else if(imc >= 18,5 && imc <= 25){

            printf("peso normal");
        }
        else if(imc > 25 && imc <= 30){

            printf("acima do peso");
        }
        else{

            printf("obeso");
        }

        return 0;
    }