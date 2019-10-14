#include <iostream>

namespace Triangle
{
bool isTriangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0) return false;
    return a + b > c && a + c > b && b + c > a;
}
}; // namespace Triangle

int main(int, char **)
{
    std::cout << "Test: " << Triangle::isTriangle(1, 2, 3) << std::endl;
    std::cout << "Test: " << Triangle::isTriangle(15, 17, 20) << std::endl;
}
