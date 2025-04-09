#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {  
            int ans=0;
            for(int i : nums) //for each loop to iterate through the values of vector nums
            {
                ans = i^ans;  // XOR operation to find the unique element
                // i=0, ans=0, nums[0]=4, ans=4^0=4
                // i=1, ans=4, nums[1]=1, ans=4^1=5 
                // i=2, ans=5, nums[2]=2, ans=5^2=7
                // i=3, ans=7, nums[3]=1, ans=7^1=6
                // i=4, ans=6, nums[4]=2, ans=6^2=4

                
            }
    
            return ans;
        }
    };


int main()
{
    Solution s;
    vector<int> nums = {4, 1, 2, 1, 2};
    int ans = s.singleNumber(nums);

    cout << "The unique element is: " << ans << endl;
    // The unique element is: 4
    
    return 0;
}


