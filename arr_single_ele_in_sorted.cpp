/* leetcode question "540" 
You are given a sorted array consisting of only integers where every 
element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.  */

#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) // brute force linear search
{
    int n=nums.size();
    //int ans;

    for(int i=0; i<n; i++)
    {
        if((i==0) && (nums[i]!= nums[i+1]))
        {
            return nums[i];
        }

        else if((i== n-1) && (nums[i]!= nums[i-1]))
        {
            return nums[i];
        }

        else if ((nums[i]!=nums[i-1]) && (nums[i]!=nums[i+1]))
        {
            return nums[i];
        }
    }
    return 0;
}

int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,8,8}; // output 2
    //vector<int> nums = {2,2,3,3,4,4,6}; // output 6
    //vector<int> nums = {1,1,2,2,3,3}; // output 0
    //vector<int> nums = {1,2,2,3,3,4,4}; // output 1
    //vector<int> nums = {1}; // output 1


    int result = singleNonDuplicate(nums); // function call

    if(result == 0) // check if the result is 0
    {
        cout << "No single element found." << endl; // output message
    }
    else 
    cout << "The single element is: " << result << endl; // output the result

    return 0;
}
