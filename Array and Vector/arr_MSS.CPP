// Max sum of a subarray
#include <iostream>
using namespace std;

int main()
{
    int n=7;
    int arr[n]={3,-4,5,4,-1,7,-8};
    int st, en, maxn=INT_MIN;

    for(st=0; st<n; st++)  // brute force apprach, O(n^2)
    {   // checking all subarrays
        // for each starting point, we check all ending points

        int sum=0; 
        for(en=st; en<n; en++) 
        {
            sum= sum+arr[en];
            maxn= max(maxn, sum); 
        }
    }

cout<<"the max sum of a subarray is "<<maxn<<endl;
    return 0;
}

// optimal approach in leet53, O(n) time complexity