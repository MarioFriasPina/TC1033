#include <iostream>

void is_leap(int num)
{
    if (num % 4 == 0)
    {
        if (num % 100 == 0)
        {
            if (num % 400 == 0)
                std::cout << num << " is a leap year\n";
            else
                std::cout << num << " is not a leap year\n";
        }
        else
            std::cout << num << " is a leap year\n";

    }
    else
        std::cout << num << " is not a leap year\n";
}

int main()
{
    int num;
    std::cout << "Enter a year to check if it is a leap year: ";
    std::cin >> num;
    is_leap(num);
}
