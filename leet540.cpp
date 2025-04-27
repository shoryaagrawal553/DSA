/* leetcode question "540" 
You are given a sorted array consisting of only integers where every 
element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.  */

#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& a)  // binary search approach
// Time complexity: O(log n) and Space complexity: O(1)
{
    int n=a.size();
    int s=0, e=n-1;

    if(n==1)  // single element arrray
    {
        return a[0];
    }

    while(s<=e)
    {
        int mid= s+ (e-s)/2;

        if(mid==0 && a[0] != a[1])
        {
            return a[mid];
        }

        else if(mid==n-1 && a[n-1] != a[n-2])
        {
            return a[mid];
        }

        else if(a[mid]!= a[mid-1] && a[mid]!= a[mid+1])
        {
            return a[mid];
        }

        

        else if(mid % 2 ==0) // if no. of elements subarrays are even
        {
            if(a[mid]==a[mid-1])
            {
                e=mid-1;
            }
            else if(a[mid] == a[mid+1])
            {
                s = mid+1;
            }
        }

        else // if no. of elements are't even they'll be odd
        //OR else if(mid%2 !=0 )
        {
            if(a[mid] == a[mid-1])
            {
                s=mid+1;
            }

            else 
            {
                e=mid-1;
            }
        }
    }
    return 0;
}

int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,8,8}; // output 2
    //vector<int> nums = {2,2,3,3,4,4,6}; // output 6
    //vector<int> nums = {1,1,2,2,3,3}; // output 0
    //vector<int> nums = {1,2,2,3,3,4,4}; // output 1
    //vector<int> nums = {1}; // output 1

    int result = singleNonDuplicate(nums); // function call

    if(result == 0) // check if the result is 0
    {
        cout << "No single element found." << endl; // output message
    }
    else 
    cout << "The single element is: " << result << endl; // output the result

    return 0;
}