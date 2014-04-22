#include "funciones.h"

int factorial(int x)
{
    return (x==0)?1:x*factorial(x-1);
}

int combinatorio(int n, int m)
{
    return factorial(m)/(factorial(n)*factorial(m-n));
}

float exponencial(int x, float tol, int n)
{
    float ter = (float)potencia(x,n)/factorial(n);
    return (ter<tol)?0:ter+exponencial(x,tol,n+1);
}

int potencia(int x, int n)
{
    return (n==0)?1:x*potencia(x, n-1);
}
