#include <stdio.h>

    int main(){

        int velf, velm, vel, multa;

        printf("insira a velocidade máxima da avenida:\n");
        scanf("%d", &velm);

        printf("agora, insira a velocidade que o motorista estava quando passou pelo radar:\n");
        scanf("%d", &vel);

        if (vel <= velm){

            printf("não ouve multas");
        }
        else if((vel < 0) || (velm < 0)){

            printf("erro");
            return 0;
        }
        else{
            velf = vel-velm;
            printf("voce passou do limite de velocidade e sua multa foi de: %d", velf*5);
        }



        return 0;
    }