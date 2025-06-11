/*You are given an array prices where prices[i] 
is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day  
to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction.
If you cannot achieve any profit, return 0.  */

#include<iostream> 
#include<vector>
using namespace std;


        int maxProfit(vector<int>& prices) 
        {
            int n= prices.size();
            int maxPrice=0, bestBuy=prices[0]; // Initialize bestBuy to the first price 
            // maxPrice to 0 as we haven't made any transactions yet
            // Iterate through the prices starting from the second day

            for(int i=1; i<n; i++)   //{3, 2, 6, 1, 4}
            {
                // If the current price is less than bestBuy, update bestBuy
                // If the current price is greater than bestBuy, calculate the profit
                // and update maxPrice if this profit is greater than the previous maxPrice

                bestBuy= min(bestBuy, prices[i]); // Update bestBuy to the minimum price seen so far

                maxPrice= max(maxPrice, prices[i]-bestBuy); // check if selling today gives better profit
                                                            // Calculate the profit if sold today(current i)
            }
            return maxPrice;
        }

        int main()
        {
            // vector<int> prices = {7,1,5,3,6,4};    // Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5
            // vector<int> prices = {7, 6, 4, 3, 1};  // No profit possible
            vector<int> prices = {3, 2, 6, 1, 4};     // Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4
            // vector<int> prices = {2, 4, 1};        // Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4-2 = 2

            cout << "Maximum profit: " << maxProfit(prices) << endl;
            return 0;
        }
