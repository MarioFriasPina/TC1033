#include <iostream>

void multiples_3_5(int min, int max)
{
    int sum = 0;

    for (int i = min; i < max; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    std::cout << "The sum of the multiples between " << min << " and " << max;
    std::cout << " is:" << sum << std::endl;
}

int main()
{
    int min = 0;
    int max = 1000;
    multiples_3_5(min, max);
}
