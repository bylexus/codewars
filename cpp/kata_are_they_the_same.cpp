#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

class Same
{
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        if (a.size() != b.size()) return false;
        for (vector<int>::size_type i = 0; i< a.size(); i++) {
            a[i] = a[i]*a[i];
        }
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        for (vector<int>::size_type i = 0; i< a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }

        return true;
    }
};

int main(int, char **)
{
    vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};

    bool test = Same::comp(a, b);
    cout << "Test 1: " << test << endl;

    a = {121, 144, 19, 161, 19, 144, 19, 11};
    b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};
    test = Same::comp(a, b);
    cout << "Test 2: " << test << endl;
}
