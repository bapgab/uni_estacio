#include <stdio.h>

    int main (){

        char ope;
        float a, b;

        printf("insira a operação que deseja realizar, usando '-', '+', '*' e '/'\n");
        scanf("%c", &ope);

        printf("insira o primeiro número da conta\n");
        scanf("%f", &a);

        printf("insira o segundo número da conta\n");
        scanf("%f", &b);

        if (ope == '+'){

            printf("a soma entre os dois números é: %.2f", a+b);
        }
        else if (ope == '-'){

            printf("a subtração entre os dois números é: %.2f", a-b);
        }

        else if (ope == '*'){

            printf("a multiplicação entre os números é: %.2f", a*b);
        }
        else if (ope == '/'){

            printf("a divisão entre os números é: %.2f", a/b);
        }
        else{
            printf("não é uma operação válida");
        }


        return (0);
    }