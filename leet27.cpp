/* 27. Remove Element 
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count=0;
        int st =0, en=n-1;

        while(st<en)
        {
            if(nums[st] != val)
            {
                st++;
            }
            if(nums[st] == val && nums[en] != val)
            {
                swap(nums[st], nums[en]);
                st++;
                en--;
            }
            else if(nums[en]==val) en--;
        }

        for(int i=0; i<n; i++)
        {
            if(nums[i] != val) count++;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3,2,2,3};
    // vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 3;
    // int val = 2;
    int k = sol.removeElement(nums, val);
    cout << "The number of elements after removing " << val << " is: " << k << endl;
    cout << "The modified array is: ";
    for(int i=0; i<k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}