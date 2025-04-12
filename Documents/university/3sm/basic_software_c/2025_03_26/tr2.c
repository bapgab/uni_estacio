#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{
  int a, b;
  printf("insira um numero: ");
  scanf(" %d", &a);
  scanf(" %d", &b);
  {
    assert(a/b);
  }
  printf("%d", a/b);
}
