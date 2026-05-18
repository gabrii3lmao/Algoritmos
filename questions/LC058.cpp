#include <string>
#include <iostream>
using namespace std;

int lengthOfLastWord(string s)
{
    int length = 0;
    bool counting = false;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            counting = true;
            length++;
        }
        else if (counting)
        {
            break;
        }
    }
    return length;
}

int main() {
    string s = "Hello World";
    cout << lengthOfLastWord(s) << endl;

    return 0;
}