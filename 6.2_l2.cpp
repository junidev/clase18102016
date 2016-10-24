#include <iostream>


void inversa(int *array_numeros, const int n)
{
    for(int i = 0; i != n/2; i++){
        int temp = array_numeros[n-i-1];
        array_numeros[n-i-1] = array_numeros[i];
        array_numeros[i] = temp;
    }
}

void printNumeros(const int *array_numeros, const int n)
{
    for(int i = 0; i != n-1; i++)
        std::cout << array_numeros[i] << ", ";
        std::cout << array_numeros[n-1];
}


int main(void)
{
    int array_numeros[]={1,2,3,4,5};
    int n = 5;
    inversa(array_numeros,n);
    printNumeros(array_numeros,n);
    return 0;

}
