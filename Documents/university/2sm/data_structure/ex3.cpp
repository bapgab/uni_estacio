#include <stdio.h>

int main (){
    int a, b;
    a = 2;
    b = 56;

    printf("os endereços são: %p, %p\n", a, b);

    if (&a > &b){
        printf("o endereço de a é maior");
    }
    else{
        printf("o endereço de b é maior");
    }
}