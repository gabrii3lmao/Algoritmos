#include <string>
#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0, right = s.size() - 1;
    while (left <= right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string word = "arara";
    bool isPal = isPalindrome(word);
    cout << isPal << endl;
    return 0;
}