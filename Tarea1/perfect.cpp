#include <iostream>

void    is_perfect(int num)
{
    int orig = num;
    int sum = 1;

    for (int i = 2; i < orig; i++)
    {
        if (orig % i == 0)
        {
            sum += i;
            num /= i;
        }
    }
    if (num == orig)
    {
        std::cout << orig << " is a prime number\n";
        return;
    }
    std::cout << "The sum of all factors is: " << sum << std::endl;
    if (orig == sum)
        std::cout << orig << " is a perfect number\n";
    else
        std::cout << orig << " is not a perfect number\n";
}

int     main()
{
    int num;
    std::cout << "Enter a number to check if it is perfect: ";
    std::cin >> num;
    is_perfect(num);
}
