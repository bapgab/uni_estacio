#include <stdio.h>

    int main(){

        float vme;

        printf("insira o valor desejado, em metros, abaixo:\n");
        scanf("%f", &vme);

        printf("o valor em decímetros para o valor %.2f é: %.2f\n", vme, vme*10);
        printf("o valor em centímetros para o valor %.2f é: %.2f\n", vme, vme*100);
        printf("o valor em milímetros para o valor %.2f é: %.2f\n", vme, vme*1000);

        return 0;
    }