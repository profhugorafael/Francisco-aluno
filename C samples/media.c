#include <stdio.h>

// vazio
void dizer_oi( ){
  printf("estou na funcao!\n");
  printf("oi\n");
  printf("adeus funcao\n");
}

int somar(int a, int b) {
  return a + b;
}

double calcular_media(double x, double y) {
  printf("oi! estou dentro da funcao :)\n");
  double resultado = (x + y) / 2;
  printf("estou saindo da funcao...\n");
  return resultado;
}

int main() {

  double a, b;

  dizer_oi();
  dizer_oi();
  dizer_oi();

  scanf("%lf %lf", &a, &b);

  printf("soma = %d", soma(4, 5));
  
  printf("media = %lf", calcular_media(a, b) );

  return 0;
}