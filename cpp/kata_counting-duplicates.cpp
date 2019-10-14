#include <iostream>
#include <string>

using std::cout;
using std::endl;

size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
    // Use a counter array: Each character gets a position in the array:
    // 0-9: index 0-9
    // a-z/A-Z: index 10 - 35
    // on occurence, the counter is increased by one.

    std::string s(in);
    size_t counters[36] = {}; // zero-initialized array
    size_t duplicates{0};
    int index;
    for (char c : s) {
        index = -1;
        // normalize c:
        if (c > 47 && c < 58) {
            // 48-57: numbers, index 0-9:
            index = c - 48;
        } else if ( c > 64 && c < 91) {
            // 65-90: A-Z, index 10-35
            index = c - 55;
        } else if (c > 96 && c < 123) {
            // 97-122: a-z, index 10-35
            index = c - 87;
        }
        // increase character count:
        if (index >= 0) {
            counters[index]++;
        }
    }
    // count characters with > 1 character count:
    for (size_t count : counters) {
        if (count > 1) duplicates++;
    }
    return duplicates;
}


int main(int, char **)
{
    cout << "aabbcde: " << duplicateCount("aabbcde") << endl;
    cout << ": " << duplicateCount("") << endl;
    cout << " : " << duplicateCount(" ") << endl;
    cout << "Indivisibilities: " << duplicateCount("Indivisibilities") << endl;
}
