#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        int num = digits[i] + 1;
        if (num == 10 && i != 0)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] = num;
            break;
        }
    }

    if (digits[0] == 10)
    {
        digits[0] = 1;
        digits.push_back(0);
    }
    return digits;
}

int main() {
    vector<int> numbers = {9, 9};
    plusOne(numbers);
    for(auto n : numbers) {
        cout << n << endl;
    }
    return 0;
}