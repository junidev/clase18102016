#include <iostream>

using namespace std;

int main(void)
{
    short number;
    cout << "Numero : ";
    cin >> number;

    if (number <= 0)
        cout << "No se puede";
    else{
        cout << "El factorial de " << number << " es ";
        int acumulador = 1;
        for(;number > 0; acumulador *= number--);
        cout << acumulador << ".\n";
    }
    return 0;
}
