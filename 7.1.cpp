#include <iostream>

int count_caracteres(char *array_c)
{
    int cant = 0;
    for(;*array_c != '\0';array_c++)
        cant++;
    return cant;
}

int main(void)
{
    char array_c[] = "Juni";
    std::cout << count_caracteres(array_c);

    return 0;

}
