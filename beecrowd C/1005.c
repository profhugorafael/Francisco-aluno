#include <stdio.h>

 int main(){

    double nota1, nota2;
    scanf("%lf %lf", &nota1, &nota2);

    double numerador = nota1 * 3.5 + nota2 * 7.5;
    double denominador = 11;

    printf("MEDIA = %.5lf\n", numerador / denominador );

    return 0
 }