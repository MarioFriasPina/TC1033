#include <iostream>

int num_primes(int min, int max)
{
    int size = 0;
    int j;

    for (int i = min; i <=max ; i++)
    {
        for (j = 2; j * j <= i; j++)
            if (i % j == 0)
                break;
        if (j * j > i && i != 1)
            size++;
    }
    return (size);
}

int main()
{
    int min = 1;
    int max = 10000000;
    std::cout << "The number of primes between " << min << " and " << max;
    std::cout << " is: " << num_primes(min, max) << std::endl;
}
