// #include <stdio.h>

// int main(){
//     int x = 10, y = 0;
//     int *px = &x;
//     y = *px;

//     printf("y = %d\n", y);

//     return 0;
// }

// #include <stdio.h>

//     int main(){
//         int x = 0;
//         int *px;

//         printf("x = %d\n", x);
//         printf("Alterando o valor do ponteiro\n");

//         px = &x;
//         *px = 99;

//         printf ("x = %d\n", x);

//         return 0;
//     }

// #include <stdio.h>

//     int main(){
//         int x = 100;
//         int *px = &x;

//         printf("valor de x = %d\n", x);
//         printf("endereço de x = %p\n", &x);
//         printf("valor de px = %d\n", *px);
//         printf("endereço de px = %p\n", px);

//         return 0;
//     }

// #include <stdio.h>

//     int main(){
//         int num, val;
//         int *p;

//         num = 10;
//         p = &num;

//         val = *p;
//         printf("o conteúdo do endereço apontado por p = %d\n", *p);
//         printf("o endereço para onde o ponteiro p aponta  = %p\n", p);
//         printf("O conteúdo de valor = %d\n", val);

//         return 0;
//     }
//jetbrains

// #include <stdio.h>

//     int main(){
//         int x = 10, y = 100;
//         int *px = &x;

//         *px = *px + 1;

//         printf("x = %d\n", x);
//         printf("y = %d", y);

//         return 0;
//     }

// #include <stdio.h>

//     int main(){
//         int x = 0;
//         int *px;
//         px = &x;

//         *px = x - 5;

//         printf("x = %d\n", x);

//         return 0;
//     }

// #include <stdio.h>

// void naoTroca(int a, int b){
//     int aux = a;
//     a = b;
//     b = aux;
// }

// void troca(int *a, int *b){
//     int aux = *a;
//     *a = *b;
//     *b = aux;
// }

// int main(){
//     int a = 1;
//     int b = 2;
//     naoTroca(a, b);
//     troca(&a, &b);
//     printf("a = %d, b = %d", a, b);

//     return 0;
// }