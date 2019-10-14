#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int find_even_index(const vector<int> numbers)
{
    int index{0};
    while (index < numbers.size())
    {
        long sumLeft{0};
        long sumRight{0};
        for (int l = 0; l < index; l++)
        {
            sumLeft += numbers[l];
        }
        for (int r = index + 1; r < numbers.size(); r++)
        {
            sumRight += numbers[r];
        }
        if (sumLeft == sumRight)
            return index;
        index++;
    }

    return -1;
}

int main(int, char **)
{
    vector<int> numbers{1, 2, 3, 4, 3, 2, 1};
    int expected = 3;
    assert(expected == find_even_index(numbers));

    numbers = {1, 100, 50, -51, 1, 1};
    expected = 1;
    assert(expected == find_even_index(numbers));

    numbers = {1, 2, 3, 4, 5, 6};
    expected = -1;
    assert(expected == find_even_index(numbers));
}
