#include <stdio.h>

int main() {

  printf("Digite a sua temperatura: "); 

  float temp;
  scanf("%f",&temp);

  if(temp>37)
    printf("O paciente esta com febre\n");

  else
    printf("A temperatura do paciente esta normal\n");

    return 0;
}
