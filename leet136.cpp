/*Given a non-empty array of integers nums, every element appears twice except for one. 
Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.*/

#include <iostream>
#include <vector>
using namespace std;

// using bit manipulation
class Solution {
    public:
        // Function to find the single unique number in the vector
        int singleNumber(vector<int>& nums) {  
            int ans = 0; // Initialize ans to 0. This will store the unique number.
            
            // Iterate through each number in the vector using a for-each loop
            for (int i : nums) 
            {
                // Perform XOR operation to isolate the unique number
                // XOR properties:
                // 1. a ^ a = 0 (number XORed with itself is 0)
                // 2. a ^ 0 = a (number XORed with 0 remains unchanged)
                // Using these properties, duplicates cancel each other out,
                // leaving only the unique number.
                ans = i ^ ans;

                // Step-by-step example (for nums = {4, 1, 2, 1, 2}):
                // i=0, ans=0, nums[0]=4, ans=4 ^ 0 = 4
                // i=1, ans=4, nums[1]=1, ans=4 ^ 1 = 5
                // i=2, ans=5, nums[2]=2, ans=5 ^ 2 = 7
                // i=3, ans=7, nums[3]=1, ans=7 ^ 1 = 6
                // i=4, ans=6, nums[4]=2, ans=6 ^ 2 = 4 (final unique number)
            }
    
            return ans; // Return the unique number
        }
};

int main()
{
    Solution s; // Create an instance of the Solution class
    vector<int> nums = {4, 1, 2, 1, 2}; // Input vector containing duplicate numbers
    int ans = s.singleNumber(nums); // Call the function to find the unique number

    // Output the result
    cout << "The unique element is: " << ans << endl;
    // Expected output: The unique element is: 4
    
    return 0; // Exit the program
}
