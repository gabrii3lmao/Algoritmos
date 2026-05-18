#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }

    unordered_map<char, int> count;

    for (int i = 0; i <= s1.size(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (auto n : count)
    {
        if (n.second != 0)
        {
            return false;
        }
    }

    return true;
}