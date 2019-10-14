#include <iostream>

using std::cout;
using std::endl;

int digital_root(int n) {
    int root{0};
    if (n <= 0) return 0;
    while (n >= 10) {
        root += n % 10;
        n = n / 10;
    }
    root += n;
    if (root >= 10) {
        return digital_root(root);
    } else {
        return root;
    }

}

int main(int, char **)
{
    cout << 16 << ": " << digital_root(16) << endl;
    cout << 195 << ": " << digital_root(195) << endl;
    cout << 992 << ": " << digital_root(992) << endl;
    cout << 167346 << ": " << digital_root(167346) << endl;
    cout << 0 << ": " << digital_root(0) << endl;
    cout << -167346 << ": " << digital_root(-167346) << endl;
}
