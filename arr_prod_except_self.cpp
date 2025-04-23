/*Given an integer array nums, return an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.  */


#include <iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums)  // brute force approach
    // time complexity is O(n^2) and space complexity is O(1)
    {
        int n=nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            int prod=1;
            for(int j=0; j<n; j++)
            {
                // if(i==j)
                // {
                //     continue;
                // }
                // else
                // {
                // prod*=nums[j];
                // }

                if(i!=j)
                {
                    prod*=nums[j];
                }
            }
            ans.push_back(prod);
        }
        return ans;
    }


int main()
{
    vector<int> nums={1,2,3,4};        // [24,12,8,6]
   // vector<int> nums={-1,1,0,-3,3};    // [0,0,9,0,0]

    cout<<"the product of all elements except self is "<<endl;

    vector<int> ans= productExceptSelf(nums);
    int n= ans.size();

    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}

// another approach can be calculating product of all the elements
// and dividing by ith element in each iteration
// but it will give wrong output if array contains 0 as the overall product will be 0 

// optimal appproach in leet238.cpp