#include <stdio.h>

    int main(){
        int valor;
        scanf("%d", &valor);

        int *p = &valor;
        *p = *p * *p;
        printf("valor ao quadrado: %d", valor);

        return 0;

}