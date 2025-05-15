/* from geeksforgeeks.org
You are given an array with unique elements of stalls[], which denote the position 
of a stall. You are also given an integer k which denotes the number of aggressive cows. 
Your task is to assign stalls to k cows such that the minimum distance between any 
two of them is the maximum possible.  */

#include <iostream>
#include <vector>
using namespace std;


bool isValid(vector<int>& arr, int k, int min_dist)
{
    
    int carr= arr[0]; // carr is the current cow position
    // We place the first cow at the first stall
    int cows=1;
    int n= arr.size();
    
    for(int i=1; i<n; i++)
    {
        int check = arr[i]-carr;
        if(check>= min_dist)
        {
            carr= arr[i];
            cows++;
        } 
    }
    
    if(cows>= k)
    {
        return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) 
{

    int mid;
    int st= 1;
    int en = stalls[stalls.size()-1]- stalls[0];
    int ans=-1;
    
    while(st<=en)
    {
        mid= st+ (en-st)/2;
        
        if(isValid(stalls, k, mid))
        {
            st= mid+1;
            ans= mid;
        }
        else
        {
            en= mid-1;
        }
    }
    return ans;
    
}


int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    
    cout << "Maximum minimum distance: " << aggressiveCows(stalls, k) << endl;
    // Output: Maximum minimum distance: 3
    
    return 0;
}