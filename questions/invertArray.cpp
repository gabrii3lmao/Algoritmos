#include <vector>
#include <iostream>
using namespace std;

void invertArray(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    invertArray(nums);

    for (int i : nums)
    {
        cout << i << endl;
    }
    return 0;
}