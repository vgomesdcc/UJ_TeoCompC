#include <stdio.h>

int main() {

  printf("Digite um numero: "); 

  int numero;
  scanf("%d",&numero);

  if(numero%2 == 0){
		printf("o numero e par\n");
	}

	else
    printf("o numero e impar\n");
}
