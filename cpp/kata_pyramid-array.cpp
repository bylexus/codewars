#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> pyramid(size_t n)
{
    vector<vector<int>> ret(n);
    for (size_t i = 0; i < n; i++)
    {
        vector<int> v(i+1);
        for(size_t j = 0; j <= i; j++) {
            v[j] = 1;
        }
        ret[i] = v;
    }
    return ret;
}

void print(vector<vector<int>> &pyramid)
{
    cout << "Pyramid size: " << pyramid.size() << endl;
    for (vector<int> &line : pyramid)
    {
        for (int i : line)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(int, char **)
{
    vector<vector<int>> v = pyramid(0);
    print(v);

    v = pyramid(1);
    print(v);

    v = pyramid(4);
    print(v);
}
