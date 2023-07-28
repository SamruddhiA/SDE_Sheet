// 121. Best Time to Buy and Sell Stock

// Stock Buy and Sell

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit,  return 0.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int buy_price = prices[0];

        int profit = 0;

        int current_profit;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < buy_price)
            {
                buy_price = prices[i];
            }
            else
            {
                current_profit = prices[i] - buy_price;
                profit = max(current_profit, profit);
            }
        }
        return profit;
    }
};
