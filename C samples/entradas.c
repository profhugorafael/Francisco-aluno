#include <stdio.h>

int main() {

  // %d - decimal
  int idade = 10;

  // %lf - long float
  double nota1, nota2, nota3;

  // %c - character
  char letra = 'P';

  printf("Por favor, digite suas notas abaixo:\n");

  scanf(" %lf %lf %lf", &nota1, &nota2, &nota3);

  double media = (nota1 + nota2)/2;

  printf("Media Final = %lf", media );

  if (media >= 7.0) {
    puts("Aprovado");
  } else if ( media >= 4.0 ) {
    puts("recuperacao");
  } else {
    puts("reprovado");
  }

  return 0;
}