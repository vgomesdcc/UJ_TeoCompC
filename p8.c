#include <stdio.h>

int main() {

  printf("Insira o custo "); 

  float custo;
  scanf("%f",&custo);

  float distribuidor;
  distribuidor = custo*0.28;

  float imposto;
  imposto = custo*0.45;

  float consumidorpaga;
  consumidorpaga = custo + distribuidor + imposto;

  printf("%.2f\n",consumidorpaga);
}
