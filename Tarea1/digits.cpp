#include <iostream>
#include <math.h>

void    print_digits(int num)
{
    int len = floor(log10(abs(num))) + 1;
    char *digits = new char[len];
    int i = len - 1;

    while (num > 0)
    {
        digits[i--] = '0' + num % 10;
        num /= 10;
    }
    while (++i < len)
    {
        std::cout << "Number " << digits[i] << std::endl;
    }
    delete[] digits;
}

int     main()
{
    int num;
    std::cout << "Enter a number to print its digits: ";
    std::cin >> num;
    print_digits(num);
}
