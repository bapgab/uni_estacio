#include <stdio.h>
    
    int main(){

        int x, y, z;
        
        printf("Insira um número inteiro:\n");
        scanf("%d", &x);

        printf("Insira outro número inteiro:\n");
        scanf("%d", &y);

        printf("Agora, insira um último número:\n");
        scanf("%d", &z);

        if (x==y && y==z){     //condições para um triângulo equilátero existir

            printf("Usando-se os 3 lados é possível formar um triângulo equilátero");
        }

        else if((x==y && x+y <=z) || (x==z && x+z <= y) || (y==z && y+z <= x)){

            printf("Usando-se os 3 números, pode-se formar um triângulo isóceles\n");
        }
        else if (x + y > z && x + z > y && y + z > x){

            printf("É possível formar um triângulo escaleno");
        }
        else{
            printf("não é um triangulo");
        }



        return 0;
    }