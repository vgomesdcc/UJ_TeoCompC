#include <stdio.h>

int main() {

  printf("Digite seu peso: "); 

  float peso;
  scanf("%f",&peso);

  printf("Digite sua altura: "); 

 float altura;
  scanf("%f",&altura);

float imc;
imc = peso/(altura*altura);

  if(imc>30){
		printf("O usuario esta obeso\n");
	}

	else
    printf("O usuario esta abaixo da linha de obesidade\n");
}
