#include <iostream>
#include <math.h>

//Te dice el log10 de un numero
int     get_size(int num)
{
    int size = 0;
    while (num > 0)
    {
        num /= 10;
        size++;
    }
    return (size);
}

//Te dice si un numero es primo
bool    es_primo(int num)
{
    int j;

    for (j = 2; j * j <= num; j++)
        if (num % j == 0)
            return false;
    if (j * j > num && num != 0)
        return true;
    return false;
}

//Rota el numero 1 posicion
int     rotar_num(int num, int size)
{
    int rot = 0;

    rot = num / 10 + ((num % 10) * pow(10, size - 1));
    return (rot);
}

bool    circular_primo(int num)
{
    int size = get_size(num);
    int rot = num;

    for (int i = 0; i < size; i++)
    {
        //Si el numero rotado es menor que el original no es circular primo
        if (rot < num)
            return (false);
        if (!es_primo(rot))
            return (false);
        rot = rotar_num(rot, size);
    }
    return true;
}

int     main(void)
{
    int num = 197;

    if (circular_primo(num))
        std::cout << num << " es un numero circular primo\n";
    else
        std::cout << num << " no es un numero circular primo\n";
    return 0;
}