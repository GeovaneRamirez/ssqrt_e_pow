#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Fa�a um programa que leia um n�mero real x e calcule o valor de f(x)= raiz de x+(x/2)+x^2 (pesquise sobre as fun��es ssqrt e pow).

int main()
{

    setlocale (LC_ALL, "Portuguese");

    system ("title CALCULO DE FUN��O");

    int x;
    float fx;


    printf("Informe um n�mero: \n");

    scanf ("%d", &x);

    fx = sqrt(x) + (x/2) + pow (x, 2);

    printf ("O resultado da fun��o  f(x)= raiz de x +(x/2)+ x^2 �: %2.f", fx);

    return 0;
}
