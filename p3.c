#include <stdio.h>

int main() {

  printf("Digite suas notass: "); 

  int prova1;
  scanf("%d",&prova1);

  int prova2;
  scanf("%d",&prova2);

  int trabalho;
  scanf("%d",&trabalho);

  if(((prova1*3)+(prova2*3)+trabalho)/7>=7){
		printf("Aprovado\n");
	}
  
	else
    printf("Reprovado\n");
}
