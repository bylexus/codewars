#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;

std::string vaporcode(const std::string &str)
{
    bool first{true};
    std::string ret;
    for (unsigned char c : str)
    {
        if (!std::isspace(c))
        {
            if (!first)
            {
                ret += "  ";
            }
            first = false;
            ret += std::toupper(c);
        }
    }
    return ret;
}

int main(int, char **)
{
    cout << "Let's go to the movies: " << vaporcode("Let's go to the movies") << endl;
}
