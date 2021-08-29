#include <stdio.h>

int main() {

  printf("Insira o tempo "); 

  int s;
  scanf("%d",&s);

  int horas;
  int resto;
  horas = s/3600;
  resto = s%3600;

  int minutos;
  int segundos;
  minutos = resto/60;
  segundos = resto%60;

  printf("Hora(s):");
  printf("%d\n",horas);
  printf("Minuto(s):");
  printf("%d\n",minutos);
  printf("Segundo(s):");
  printf("%d\n",segundos);
  
}
