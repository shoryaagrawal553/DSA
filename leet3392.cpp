/*Given an integer array nums, return the number of subarrays 
of length 3 such that the sum of the first and third numbers 
equals exactly half of the second number.  */

#include <iostream>
#include <vector>
using namespace std;

// int countSubarrays(vector<int>& nums) // using while loop
// {
//     int n= nums.size();
//     int s=0, e=2;
//     int count=0;
//     while(e<n)
//     {
//         int sum = nums[s]+nums[e];
//         if(nums[s+1]== (sum *2))
//         {
//             count++;
//         }
//         s++;
//         e++;
//     }
//     return count;
// }

int countSubarrays(vector<int>& nums) // using for loop (more readable and neat)
{
    int n= nums.size();
    int count=0;
    for(int i=0; i<n-2; i++)
    {
        int sum = nums[i]+nums[i+2];
        if(nums[i+1]== (sum *2))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    //vector<int> nums = {1,2,3,4,5}; // output 0
    vector<int> nums = {1,2,1,4,1}; // output 1
    //vector<int> nums = {1,2,3}; // output 0

    int result = countSubarrays(nums); // function call
    cout << "The number of subarrays is: " << result << endl; // output the result
    return 0;
}