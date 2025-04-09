/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ 
times. You may assume that the majority element always exists in the array.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums)  // brute force approach, O(n^2)
{
    int i, j, ans=0;
    int n=nums.size();
    for(i=0; i<n; i++)
    {
        int  count=0;
        for(j=i+1; j<n; j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>=n/2)
        {
            ans=nums[i];
        }
    }
    return ans;
}

// int majorityElement(vector<int> nums) // two pointer will work only if the array is sorted
// {
//     int n=nums.size();
//     int st=0, en=n-1,count=0, ans;

//     while(st<en)
//     {
//         if(nums[st]==nums[en])
//             {
//                 count++;
//                 en--;
//             }
//         }
//         if(count>=n/2)
//         {
//             ans=nums[i];
//         }
//     }
// }

// int majorityElement(vector<int>& nums)  // optimal approach, O(nlogn) time complexity
// {                                       // nlogn for sorting + O(n) for traversing the array
//     sort(nums.begin(), nums.end());
//     int st = 0, en = nums.size() - 1;
    
//     // Since the majority element is guaranteed to appear more than n/2 times,
//     // we can safely return the middle one
//     return nums[(st + en) / 2];
// }


// int majorityElement(vector<int>& nums) // optimal approach, O(nlogn) time complexity
// // using sorting
// // using the fact that the majority element will be at the middle of the sorted array
// {
//     int n=nums.size();
//     sort(nums.begin(), nums.end());
//     return nums[n/2];
// }

int main()
{
    vector<int> arr={2,2,1,1,1,2,2};
    // vector<int> arr={3,2,3};
    // vector<int> arr={1,2,3,4,5,6,7,8,9};
    // vector<int> arr={1,1,2,2,3,3,4,4,5,5};

    cout<<"the majority element is "<<majorityElement(arr)<<endl;

    return 0;
}

// optimal approach in leet169