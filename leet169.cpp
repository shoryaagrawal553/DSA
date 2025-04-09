/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ 
times. You may assume that the majority element always exists in the array.
 */

#include <iostream>
#include <vector>
using namespace std;

// [] brackets are used because the array is passed as a pointer to the function
int arr_majorityElement(int arr[], int n)  // using array and Boyer-Moore Voting Algorithm
{
    int freq=0, ans=0;

    for(int i=0; i<n; i++)
    {
        if(freq==0)
        {
            ans= arr[i];
        }

        if(ans == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int vec_majorityElement(vector<int> nums)
{
    int n=nums.size();
    int freq=0, ans=0; 

    for(int i=0; i<n; i++)
    {
        if(freq==0)
        {
            ans= nums[i];
        }

        if(ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    int n=6;
    int arr[n]={1,2,2,1,1,1};
    vector<int> vec={1,1,2,2,3,3,4,4,5,5};
    
    int ans1 = arr_majorityElement(arr , n);  //pointer to the function and in the function calling
     // it is not required to use brackets

    int ans2 = vec_majorityElement(vec);

    cout<<"the majority element is "<<ans1<<endl;
    cout<<"the majority element is "<<ans2<<endl;

    return 0;
}