/* sort_colours
Given an array nums with n objects colored red, white, or blue, sort them in-place 
so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.  */

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) 
{
    int n = nums.size();
    int low=0, mid=0, high=n-1;

    while(mid<= high)
    {
        //if()
        if(nums[mid]==0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }

        else if(nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums= {2,0,2,1,1,0};
    int n= nums.size(); 

    cout<<"The sorted array is: \n";

    sortColors(nums);
    for(int i=0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}