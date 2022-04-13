#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Faça um programa que leia um número real x e calcule o valor de f(x)= raiz de x+(x/2)+x^2 (pesquise sobre as funções ssqrt e pow).

int main()
{

    setlocale (LC_ALL, "Portuguese");

    system ("title CALCULO DE FUNÇÃO");

    int x;
    float fx;


    printf("Informe um número: \n");

    scanf ("%d", &x);

    fx = sqrt(x) + (x/2) + pow (x, 2);

    printf ("O resultado da função  f(x)= raiz de x +(x/2)+ x^2 é: %2.f", fx);

    return 0;
}
