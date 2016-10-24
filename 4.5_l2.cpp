#include <iostream>

int suma_numeros(const int *array_num, const int n)
{
    int suma = 0;
    for(int i = 0; i != n; i++){
        suma += array_num[i];
    }
    return suma;
}

int main(void)
{
    int array_num[]={1,1,3,4,1};
    int n = 5;
    std::cout << suma_numeros(array_num,n);

    return 0;
}
