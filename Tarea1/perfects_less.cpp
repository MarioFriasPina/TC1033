#include <iostream>
#include <math.h>

int is_prime(int num)
{
    int j;

    for (j = 2; j * j <= num; j++)
    {
        if (num % j == 0)
            return false;

    }
    if (j * j > num)
        return true;
    return false;
}

int     num_perfects(int min, int max)
{
    int perf;
    int j;
    int num = 0;

    for (int i = min; i <= max; i++) // Checks all numbers smaller than max
    {
        if (is_prime(i) && is_prime(pow(2, i) - 1)) // Checks to see if 2^p - 1 is prime
        {
            perf = pow(2, i - 1) * (pow(2, i) - 1);
            if (perf <= max)
            {
                std::cout << perf << " is perfect!\n";
                num++;
            }
            else
                break;
        }
    }
    return (num);
}

int     main()
{
    int min = 1;
    int max = 10000000;
    int num;
    num = num_perfects(min, max);
    std::cout << "The number of perfect numbers between " << min << " and " << max;
    std::cout << " is: " << num << std::endl;
}
