/* You are given an integer mountain array arr of length n where the 
values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.  */

#include <iostream>
#include <vector>
using namespace std;

// this approach is based on the fact that the peak element will always be greater than its neighbours
// it searches by dividing array into two halves and checking which half has the peak element
// if the left half has the peak element, then the right half will be a slope and vice versa

// it is inspired by the binary search approach
int peakIndexInMountainArray(vector<int>& arr) 
{
    int n = arr.size();
    int s=1, e=n-2; // because start and end can never be peak value 
                    //because it will be a slope then and not a mountain
    int mid;

    while(s<=e)
    {
        mid= s+ (e-s)/2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
        {
            return mid;
        }

        else if(arr[mid-1] > arr[mid])
        {
            e=mid-1;
        }

        else if(arr[mid+1] > arr[mid])
        {
            s=mid+1;
        }
    }

    return 0;
}


int main()
{
    vector<int> arr={0,2,1,0};
    // vector<int> arr={0,1,0};
    // vector<int> arr={0,2,3,4,5,6,7,8,9,10,9,8,7,6,5};

    int ans=peakIndexInMountainArray(arr);

    cout<<"The peak index in the mountain array is: "<<ans<<endl;

    return 0;
}