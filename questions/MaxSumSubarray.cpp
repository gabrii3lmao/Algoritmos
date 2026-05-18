#include <iostream>
#include <climits>
using namespace std;
int maxSumSubarray(int arr[], int n, int k)
{
    if (n < k)
    {
        return -1;
    }
        
    int max_sum = INT_MIN;
    int windows_sum = 0;

    for (int i = 0; i < k; i++)
    {
        windows_sum += arr[i];
    }

    max_sum = windows_sum;

    for (int i = k; i < n; i++)
    {
        windows_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, windows_sum);
    }

    return max_sum;
}

int main()
{
    int arr[] = {2, 1, 5, 1, 3, 2};

    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sum of subarray of size " << k << " is: " << maxSumSubarray(arr, n, k) << endl;

    return 0;
}