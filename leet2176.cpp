/*Given a 0-indexed integer array nums of length n and an integer k, 
return the number of pairs (i, j) where 0 <= i < j < n, 
such that nums[i] == nums[j] and (i * j) is divisible by k.    */

#include <iostream>
#include<vector>
using namespace std;

int countPairs(vector<int>& nums, int k)
{
    int n=nums.size();
    int count =0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nums[i]==nums[j] && (i*j)%k==0)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    // vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    // int k=2;

    vector<int> nums = {3,1,2,2,2,1,3};
    int k = 2;


    int ans=countPairs(nums,k);
    cout<<"The number of pairs (i,j) such that nums[i]==nums[j] and (i*j)%k==0 is: "<<ans<<endl;
    return 0;
}