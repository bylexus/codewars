#include <iostream>
#include <cmath>

bool isPrime (int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    int border = ceil(sqrt(num));

    // just check all odd divisors up to sqrt(num):
    for (int i = 3; i <= border; i += 2) {
        if (num % i == 0) return false;
    }

    return true;
}

int main(int, char **)
{
    std::cout << isPrime(13) << std::endl;
    std::cout << isPrime(27) << std::endl;
    std::cout << isPrime(25) << std::endl;
    std::cout << isPrime(97) << std::endl;
    std::cout << isPrime(49) << std::endl;
    std::cout << isPrime(37) << std::endl;
}
