#include <iostream>
#include <vector>
#include <algorithm>

/**
 * ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters
 * after it in the alphabet. ROT13 is an example of the Caesar cipher.
 *
 * Create a function that takes a string and returns the string ciphered with Rot13.
 * If there are numbers or special characters included in the string,
 * they should be returned as they are. Only letters from the latin/english alphabet should be shifted,
 * like in the original Rot13 "implementation".
*/

using namespace std;

string rot13(string msg)
{
    string ret{msg};
    // We take the modulo of ASCII 65 - 90 (big chars)
    // and the modulo of ASCII 97 - 122 (small chars)
    // All the rest stays the same.
    for (size_t i = 0; i < msg.length(); i++) {
        if (msg[i] >= 65 && msg[i] <= 90) {
            ret[i] = (msg[i] - 65 + 13) % 26 + 65;
        } else if (msg[i] >= 97 && msg[i] <= 122) {
            ret[i] = (msg[i] - 97 + 13) % 26 + 97;
        };
    }
    return ret;
}

int main(int, char **)
{
    cout << "test should become grfg: " << rot13("test") << endl;
    cout << "Test should become Grfg: " << rot13("Test") << endl;
    cout << "AbCd should become NoPq: " << rot13("AbCd") << endl;
    cout << "Alex1! should become Nyrk1!: " << rot13("Alex1!") << endl;
}
