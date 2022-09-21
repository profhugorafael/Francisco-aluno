#include <stdio.h>

// ------------------------------------------------------

void imprime_area_triangulo(double base, double altura) {
  double area = (base*altura) / 2;
  printf("TRIANGULO: %.3lf\n", area);
}

// ------------------------------------------------------

void imprime_area_circulo(double raio) {
  double PI = 3.14159;
  double area = PI*raio*raio;
  printf("CIRCULO: %.3lf\n", area);
}

// ------------------------------------------------------

void imprime_area_trapezio(double base_maior, double base_menor, double altura){
  double area = ((base_maior + base_menor) * altura ) / 2;
  printf("TRAPEZIO: %.3lf\n", area);
}

// ------------------------------------------------------

void imprime_area_quadrado(double lado) {
  double area = lado*lado;
  printf("QUADRADO: %.3lf\n", area);
}

// ------------------------------------------------------

void imprime_area_retangulo(double base, double altura) {
  double area = base*altura;
  printf("RETANGULO: %.3lf\n", area);
}

// ------------------------------------------------------

int main() {

  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);

  imprime_area_triangulo(a, c);
  imprime_area_circulo(c);
  imprime_area_trapezio(a, b, c);
  imprime_area_quadrado(b);
  imprime_area_retangulo(a, b);

  return 0;
}

// ------------------------------------------------------