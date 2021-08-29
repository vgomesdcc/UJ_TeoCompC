#include <stdio.h>

int main() {

  printf("Insira o salario:"); 

  float salario;
  scanf("%f",&salario);

  if(salario<=1903.98){
    printf("seu salario liquido e R$ ");
    printf("%.2f",salario);
    printf(", Voce esta insento do imposto\n");
  }

  else if(salario>1903.99 && salario<=2826.65){
    printf("seu salario liquido e R$ ");
    printf("%.2f",salario-(salario*0.075));
    printf(", Voce foi tributado em 7,5%%\n");
  }

  else if(salario>=2826.66 && salario <=3751.05){
    printf("seu salario liquido e R$ ");
    printf("%.2f",salario-(salario*0.15));
    printf(", Voce foi tributado em 15%%\n");
  }

  else if(salario>=3751.06 && salario <=4664.68){
    printf("seu salario liquido e R$ ");
    printf("%.2f",salario-(salario*0.225));
    printf(", Voce foi tributado em 22,5%%\n");
  }

  else if(salario>=4664.69){
    printf("seu salario liquido e R$ ");
    printf("%.2f",salario-(salario*0.275));
    printf(", Voce foi tributado em 27,5%%\n");
  }

}
