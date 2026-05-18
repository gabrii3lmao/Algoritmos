#include <vector>
#include <iostream>
using namespace std;

vector<int> twoPointers(const vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
        int result = nums[left] + nums[right];
        if (result == target)
        {
            return {left + 1, right + 1}; // indices começam em 1 
        }

        if (result > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    return {-1, -1};
}

int main()
{

    return 0;
}