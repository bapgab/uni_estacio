#include <stdio.h>
#include <assert.h>

int main(){
  int num, maior;
  printf("insira um número\t");
  scanf(" %d", &num);
  {
    printf("insira outro número\t");
    scanf(" %d", &maior);
    assert(num < maior);
    printf("o número maior é: \n", maior);
  }
}
