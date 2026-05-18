#include <iostream>
#include <vector>
using namespace std;

void removeDuplicatesInPlace(vector<int> &nums)
{
    int slow = 0;
    for (int fast = 1; fast < nums.size(); fast++)
    {
        if (nums[slow] != nums[fast])
        {
            slow++;
            nums[slow] = nums[fast];
        }
    }
    nums.resize(slow + 1);
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 4, 4, 5};
    removeDuplicatesInPlace(nums); // {1, 2, 3, 4, 5}

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    return 0;
}