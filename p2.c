#include <stdio.h>

int main() {

  printf("Digite dois numeros: "); 

  int n1;
  scanf("%d",&n1);

  int n2;
  scanf("%d",&n2);

  if(n1==n2){
		printf("os numeros sao iguais\n");
	}
	
	else if(n1>n2){
		printf("%d\n",n1);
	}
	
	else if(n2>n1){
		printf("%d\n",n2);
	}
}
