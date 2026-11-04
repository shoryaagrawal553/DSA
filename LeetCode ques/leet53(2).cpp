#include <iostream>
#include <climits>  
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's algorithm: at each element, either extend the current
        // subarray or start a new subarray here. This is the same idea as
        // resetting currsum to 0 in leet53.cpp when its sum becomes non-positive.
        int curr=0;
        // Keep this separate from curr: it records the best sum even when every
        // element is negative, where resetting curr to 0 would lose the answer.
        int maxs=INT_MIN;

        for(int i:nums)
        {
            // curr + i extends the previous subarray; i starts a fresh one.
            // If the previous sum was non-positive, starting fresh is at least
            // as good as extending it, just as leet53.cpp discards that sum.
            curr=max(curr+i,i);
            // Update the best contiguous-subarray sum seen so far.
            maxs=max(maxs, curr);
            
        }

        // Return the largest subarray sum, including for all-negative input.
        return maxs;
    }
};

int main()
{
    Solution sol;
    // Example array containing positive and negative values.
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4}; // Example input
    int result = sol.maxSubArray(nums);
    cout << "The maximum subarray sum is: " << result << std::endl;
    return 0;
}