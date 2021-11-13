#include <iostream>

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

int     invertir_num(int num)
{
    int size = get_size(num);
    int inv = 0;

    for (int i = 0; i < size; i++)
    {
        inv *= 10;
        inv += num % 10;
        num /= 10; 
    }
    return (inv);
}

int     main(void)
{
    std::cout << invertir_num(350039) << std::endl;
    return 0;
}
