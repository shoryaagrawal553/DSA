/* Given an integer array nums, return an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation. */

#include <iostream>
#include<vector>
using namespace std;

// vector<int> productExceptSelf(vector<int>& nums)  // optimal time complexity O(n)
// {
//     int n= nums.size();
//     vector<int> prefix(n); // n elements
//     vector<int> suffix(n);
//     vector<int> ans(n);  // ither initialize with size n, or use .push_back()

//     prefix[0]=1;
//     for(int i=1; i<n; i++) // from 1 because there is no prefix for first element
//     {
//         prefix[i]= prefix[i-1]*nums[i-1];
//     }

//     suffix[n-1]=1;    // there is no suffix product for last element
//     for(int i=n-2; i>=0; i--)
//     {
//         suffix[i]= suffix[i+1]* nums[i+1]; 
//     }

//     for(int i=0; i<n; i++)
//     {
//         ans[i]= prefix[i] * suffix[i];
//     }

//     return ans;

// }

vector<int> productExceptSelf(vector<int> nums)  // both time O(n) and space O(1) optimized
{
    int n = nums.size();
    vector<int> ans(n, 1);   // size n and all elements initialized to 1

    //ans[1]=1;
    for(int i=1; i<n; i++)
    {
        ans[i]= ans[i-1] * nums[i-1];   // instead of a second array, we are storing 
                                        //prefix product in sum only
    }

    int suff=1;
    for(int i= n-2; i>=0; i--)
    { 
        suff= suff* nums[i+1];  

        ans[i]= ans[i]*suff;   // to multiply current number's suffix in the ans vec storing 
                               // values of that no. prefix product
    }

    return ans;
}


int main()
{
    //vector<int> nums={1,2,3,4};        // [24,12,8,6]
    vector<int> nums={-1,1,0,-3,3};    // [0,0,9,0,0]

    vector<int> ans= productExceptSelf(nums);

    cout<<"the product of all elements except self is "<<endl;

    for(int i:ans)
    {
        cout<<i<<" ";
    }


    return 0;
}

//Prefix Product: The product of all elements before the current index i.
