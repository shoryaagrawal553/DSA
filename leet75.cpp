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