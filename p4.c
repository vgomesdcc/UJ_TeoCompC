#include <stdio.h>

int main() {

  printf("Digite dois numeros: "); 

  int numerador;
  scanf("%d",&numerador);

  int denominador;
  scanf("%d",&denominador);

  if(numerador%denominador == 0){
		printf("Divisores perfeitos\n");
	}

	else
    printf("Nao sao divisores perfeitos\n");
}
