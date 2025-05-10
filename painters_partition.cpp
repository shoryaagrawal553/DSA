/* Dilpreet wants to paint his dog's home that has n boards with different lengths. 
The length of ith board is given by arr[i] where arr[] is an array of n integers. 
He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board.

Return the minimum time to get this job done if all painters start together with 
the constraint that any painter will only paint continuous boards, 
say boards numbered [2,3,4] or only board [1] or nothing but not boards [2,4,5]. */

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> &arr, int n, int k, int maxAlwdTime)
{
    int painter=1;
    int time = 0;
    
    for(int i=0; i<n; i++)
    {
        if(time + arr[i] <= maxAlwdTime)
        {
            time+= arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    
    if(painter>k)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int minTime(vector<int>& arr, int k) 
{
    // code here
    int en=0, mid, ans=-1;
    for(int i: arr)
    {
        en+=i;
    }
    int st= *max_element(arr.begin(), arr.end());
    int n= arr.size();
    
    // if(n<k)
    // {
    //     return -1;
    // } 
    /* The task is to minimize the maximum time any painter 
    spends — not to use all painters mandatorily.  */
    
    while(st<=en)
    {
        mid= st+ (en-st)/2;
        
        if(isValid(arr, n, k, mid))
        {
            ans= mid;
            en=mid-1;
        }
        else
        {
            st= mid+1;
        }
    }
    
    return ans;
}

int main()
{
    vector<int> arr= {1, 10, 5, 20, 15};
    int k=2;

    // vector<int> arr= {10, 20, 30, 50, 40};       
    // int k=3;
    
    cout<<"Minimum time taken to paint all the boards is: "<<minTime(arr, k)<<endl;

    return 0;
}