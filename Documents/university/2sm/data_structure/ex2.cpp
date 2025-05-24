#include <stdio.h>

void vpi(int *pi){
    int a = 100;
    *pi = a;
}

void vpf(float *pf){
    float b = 100.99;
    *pf = b;
}

void vpc(char *pc){
    char c = 'e';
    *pc = c;
}

int main(){
    int a = 9;
    float b = 10.8;
    char c = 'c';

    vpi(&a);
    vpf(&b);
    vpc(&c);

    printf("valor: %d\n", a);
    printf("valor: %.2f\n", b);
    printf("letra: %c\n", c);
}