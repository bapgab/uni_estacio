#include <stdio.h>

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}
int main(){
    int a;  //primeiro número
    printf("digite um número");
    scanf("%d", &a);
    int fact = factorial(a);

    printf ("\no fatorial de %d é %d", a, fact);
    return 0;
}