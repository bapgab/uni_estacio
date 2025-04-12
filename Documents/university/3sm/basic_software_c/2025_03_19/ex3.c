#include <stdio.h>
#include <assert.h>

int main(){
	int insert = 0;
	printf("insira um número");
	scanf("%d", &insert);
	assert(insert < 0);
	printf("numero menor do que 10");
}
