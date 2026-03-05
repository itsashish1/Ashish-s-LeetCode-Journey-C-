// Best Time to Buy and Sell Stock
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;climits&gt;

using namespace std;

class Solution {
public:
    int maxProfit(vector&lt;int&gt;&amp; prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        for(int price : prices) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }
        return max_profit;
    }
};