//leet code question 75
/*Given an array nums with n objects colored red, white, or blue, sort them 
in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.  */

#include <iostream>
#include <vector>
using namespace std;

// brute force will be using in built sort function or sorting algo
// in using most optimal sorting algo the time complexity will be O(nlogn)
//optimized solution, optimal solution in leet75 (dutch national flag algo) 

void sortColors(vector<int>& nums)  
{// time complexity is O(n) and space complexity is O(1)

    int count0=0, count1= 0, count2=0;
    int n = nums.size();

    for(int i=0; i<n; i++) //to count the number of 0s, 1s and 2s
        {
        if(nums[i]==0)
        {
            count0++;
        }
        else if(nums[i]==1)
        {
            count1++;
        }
        else if(nums[i]==2)
        {
            count2++;
        }
    }

    for(int i=0; i<n; i++)  //to put the 0s, 1s and 2s in the array
    //we can use the count of 0s, 1s and 2s to put them in the array
    {
        if(i<count0)
        {
            nums[i]=0;
        }
        else if(i<count0+count1)
        {
            nums[i]=1;
        }
        else 
        {
            nums[i]=2;
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