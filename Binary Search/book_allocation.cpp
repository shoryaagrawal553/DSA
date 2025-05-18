#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_valid(vector<int>& arr, int n, int k, int MaxAllowedPgs)
    {
        int stu=1;
        int pages= 0;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]>MaxAllowedPgs) // if any book has more pages than the maximum allowed pages
            {
                return false;
            }

            if(pages+arr[i] <= MaxAllowedPgs)
            {
                pages+= arr[i];
            }
            
            else
            {
                stu++;
                pages=arr[i];
            }
        }
        
        if(stu > k)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

int findPages(vector<int> &arr, int k) 
{
    int st= *max_element(arr.begin(), arr.end());
    int en=0, mid;
    for(int i: arr)
    {
        en+=i;
    }
    int ans= -1;
    int n= arr.size();

    if(n<k)  // if number of books (not their pages) is less than number of students
    {
        return -1;
    }
    
    while(st<=en)
    {
        mid= st+ (en-st)/2;
        
        if(is_valid(arr, n, k, mid))
        {
            ans=mid;
            en=mid-1;
        }
        
        else
        {
            st=mid+1;
        }
    }
    
    
    return ans;
    
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};  {}
    int k = 2; // Number of students
    
    cout<< "Minimum number of pages: " << findPages(arr, k) << endl;

    return 0;
}