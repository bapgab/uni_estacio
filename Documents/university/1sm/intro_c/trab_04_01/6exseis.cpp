#include <stdio.h>

    int main(){

        int mes, ano, dias;

        printf("insira o mês desejado, sendo este de 1 a 12\n");
        scanf("%d", &mes);

        if (mes <= 0 || mes >= 13){
            printf("mes invalido");
            return 0;
        }

        printf("insira o ano em questão, sendo ele D.C\n");
        scanf("%d", &ano);

        if (ano < 0){

            printf("ano inválido");
            return 0;
        }

        if (mes == 1 || mes == 3 || mes == 5 || mes == 6 || mes == 8 || mes == 10 || mes == 12){

            printf("esse mês teve 31 dias");
        }                       //estava pesquisando e descobri que escrever desse jeito é melhor para entender o código e executar dps, é isso msm?
        else if ((mes == 4) || (mes == 7)|| (mes == 9) || (mes == 11)){

            printf("esse mês teve 30 dias");
        }
        else if (mes == 2 && (ano%4 == 0 && ano%100 != 0) || (ano%400 == 0)){
            
            printf("esse mes teve 29 dias");
        }
        return 0;
    }