#include <iostream>

void printNumeros(const int *array_numeros, const int n)
{
    for(int i = 0; i != n-1; i++)
        std::cout << array_numeros[i] << ", ";
    std::cout << array_numeros[n-1];
}

int main(void)
{
    int array_numeros[]={0,1,2,3,4,5};
    printNumeros(array_numeros,6);

    return 0;

}
