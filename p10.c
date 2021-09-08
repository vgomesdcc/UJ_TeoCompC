#include <stdio.h>
#include<string.h>

int main() {

  printf("Insira o cargo: "); 
  int compare;
  char program[11] = "programador";

  char cargo[30];
  scanf("%s",cargo);

  compare = strcmp(cargo,program);

  printf("Insira o salario: "); 

  float salario;
  scanf("%f",&salario);

  if(compare==0){
    printf("Seu novo salario e de: %.2f\n",salario+(salario*0.30));
  }

  else{
    printf("Seu novo salario e de: %.2f\n",salario+(salario*0.10));
  }
}
