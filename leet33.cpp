/* searc_in_rotated_sorted_array.cpp
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown 
pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], 
..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] 
might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of 
target if it is in nums, or -1 if it is not in nums.  */

#include <iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target)
{
    int n= nums.size();
    int s=0, e=n-1;
    int mid;

    while(s<=e)
    {
        mid=s + (e-s)/2;

        if(nums[mid]==target) // check if mid is the target
        {
            return mid;
        }
        
        else if(nums[s]< nums[mid]) // check if right half is sorted
        {
            if(nums[s]<=target && target<= nums[mid]) // check if the target lies in the sorted part
            {
                e=mid-1;
            }
            else  // else search in the unsorted half
            {
                s=mid+1;
            }
        }

        else // if the left half is the sorted one
        {
            if(nums[mid]<=target && target<= nums[e]) // check if the target lies in the sorted left part
            {
                s=mid+1;
            }
            else  // else search in the unsorted right half
            {
                e=mid-1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> nums={4,5,6,7,0,1,2};
    // vector<int> nums={1,3};
    // vector<int> nums={1};
    // vector<int> nums={1,3,5};
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    
    int ans=search(nums,target);
    if(ans==-1)
    {
        cout<<"Element not found in the array."<<endl;
    }
    else
    {
        cout<<"Element found at index: "<<ans<<endl;
    }

    return 0;
}