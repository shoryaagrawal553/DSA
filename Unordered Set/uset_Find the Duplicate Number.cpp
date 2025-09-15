/*leetcode 287. Find the Duplicate Number  
Given an array of integers nums containing n + 1 integers where each integer is in the 
range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and using only constant extra space.
Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
Example 2
Input: nums = [3,1,3,4,2]
Output: 3
Example 3:
Input: nums = [3,3,3,3,3]
Output: 3
Constraints:
1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.  */

#include <iostream>  // using frequency array in leet287
#include<vector>
#include<unordered_set>
using namespace std;

// int findDuplicate(vector<int>& nums)   // unordered set  T.C.= O(n)   S.C.= O(n)
// {
//     unordered_set<int> s;

//     for(int val: nums)
//     {
//         if(s.find(val) != s.end())
//         {
//             return val;
//         }

//         s.insert(val);
//     }

//     return -1;
// }

int findDuplicate(vector<int>& nums)   // Floyd's Tortoise and Hare (Cycle Detection) T.C.= O(n)   S.C.= O(1)
{
    int slow= nums[0];   // slow pointer
    int fast= nums[0];   // fast pointer

    do{
        slow= nums[slow];  // move by 1 step
        fast= nums[nums[fast]];  // move by 2 steps
    }
    while(slow!= fast);

    slow= nums[0];
    while(slow != fast)
    {
        slow= nums[slow];
        fast= nums[fast];
    }

    return slow;  // or fast
}


int main()
{
    vector<int> nums = {3,1,3,4,2};
    // vector<int> nums = {3,3,3,3,3};
    // vector<int> nums = {1,3,4,2,2};
    
    cout<<findDuplicate(nums);

    return 0;
}