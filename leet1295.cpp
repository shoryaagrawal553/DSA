/*Given an array nums of integers, return how many of them contain an even number of digits.
  */

#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) 
{
    int n=nums.size();
    int count=0;

    for(int i=0; i<n; i++)
    {
        int x=nums[i];
        int digit=0;
        while( x != 0)
        {
            int rem= x%10;
            x= x/10;
            digit++;
        }
        if(digit%2==0)count++;
    }

    return count;
}

int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};
    int result = findNumbers(nums);
    cout << "Count of numbers with even number of digits: " << result << endl;
    // Output: 2 (12 and 7896 have an even number of digits)
    // Explanation: 12 has 2 digits and 7896 has 4 digits.
    return 0;
}