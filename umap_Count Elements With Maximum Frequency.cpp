/* leet code question 3005: Count Elements With Maximum Frequency 
You are given an array nums consisting of positive integers.
Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
The frequency of an element is the number of occurrences of that element in the array.
Example 1:
    Input: nums = [1,2,2,3,1,4]
    Output: 4
    Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
    So the number of elements in the array with maximum frequency is 4.
Example 2:
    Input: nums = [1,2,3,4,5]
    Output: 5
    Explanation: All elements of the array have a frequency of 1 which is the maximum.
    So the number of elements in the array with maximum frequency is 5.

Constraints:
    1 <= nums.length <= 100
    1 <= nums[i] <= 100   */

// since its constraints are small, we can use an array of size 101 instead of an unordered_map
// an array will be faster than an unordered_map in this case
// array code in arr_Count Elements With Maximum Frequency.cpp

#include <bits/stdc++.h>
using namespace std;

int maxFrequencyElements(vector<int>& nums) 
{
    unordered_map<int, int> map;
    for(int i: nums)
    {
        // if(map.find(nums[i]) == map.end())  // if nums[i] does not exist in the map
        // {
        //     map[nums[i]] = 0; 
        // }
        // map[nums[i]]++;  

        map[i] ++; //map[key]++, if key doesn't exist, operator[] inserts it with a default-constructed value (which is 0
    }

    int maxfreq = INT_MIN;
    int total_maxfreq = 0;
    for(auto const& i : map)  //// Use 'const&' for efficiency and to avoid copying
    {
        // maxfreq= max(i.second, maxfreq);

        int current_freq = i.second;
        if(current_freq > maxfreq)
        {
            maxfreq = current_freq;
            total_maxfreq = current_freq; // Found a new higher max frequency, reset sum
        }

        else if (current_freq == maxfreq) total_maxfreq += current_freq;
    }

    // int ans=0;
    // for(auto const& i: map)
    // {
    //     if(i.second == maxfreq) ans+=i.second;
    // }

    // return ans;

    return total_maxfreq;
}

int main()
{
    vector<int> nums = {1,2,2,3,1,4};  // expected output: 4
    // vector<int> nums = {1,2,3,4,5};  // expected output: 5
    // vector<int> nums = {1,1,1,2,2,3,3,3,3};  // expected output: 7
    cout << maxFrequencyElements(nums) << endl;

    return 0;
}