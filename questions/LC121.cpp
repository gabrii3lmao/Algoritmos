#include <vector>
#include <iostream>
using namespace std;

int bestTimeToBuyAndSell(vector<int> &prices)
{
    int buyPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        maxProfit = max(maxProfit, prices[i] - buyPrice);
        buyPrice = min(buyPrice, prices[i]);
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max profit from this week is " << bestTimeToBuyAndSell(prices) << endl;

    return 0;
}