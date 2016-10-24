#include <iostream>

int suma_numeros(int *array_numeros, int n)
{
    int suma=0;
    if (n==1)
        return array_numeros[0];
    else
        suma = array_numeros[0] + suma_numeros(array_numeros+1,n-1);
    return suma;
}

int main(void)
{
    int array_numeros[]={2,2,2,2,2};
    int n = 5;
    std::cout << suma_numeros(array_numeros,n );

    return 0;
}
