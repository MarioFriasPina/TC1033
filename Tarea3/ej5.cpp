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
    std::cout << num << std::endl;
    return true;
}

int     contar_circulares(int min, int max)
{
    int cuenta = 0;

    for (int i = min; i < max; i++)
    {
        if (circular_primo(i))
            cuenta++;
    }
    return (cuenta);
}

int     main(void)
{
    int max = 1000000;
    int total;

    total = contar_circulares(2, max);
    std::cout << "Hay " << total << " numeros circulares primos menores que " << max << std::endl;
    return 0;
}