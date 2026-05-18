#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        seen[i] = i;
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end() && seen[complement] != i)
        {
            return {i, seen[complement]};
        }
    }
    return {-1, -1};
}