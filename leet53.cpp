// max sub array sum
// using kadane's algorithm
// kadane's algorithm is a dynamic programming algorithm that solves 
//the maximum subarray problem in linear time.


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=7;
    // int arr[n]={3,-4,5,4,-1,7,-8};
    int arr[n]={-2,-3,-4,-1,-5,-6,-7};

    int i, currsum=0, maxsum=INT_MIN;

    for(i=0; i<n; i++)
    {
        currsum+= arr[i]; // add the current element to the current sum
        maxsum= max(maxsum, currsum);  // update the maximum sum if the current sum is greater

        if(currsum<=0)  // if the current sum is less than or equal to 0, reset it to 0
        {               // because a negative sum will not contribute to the maximum sum of a subarray
                        // as it will only decrease the sum of any future subarray
            
            currsum=0;
        }
    }

    cout<<"the max sum of a subarray is "<<maxsum<<endl;

    // using vectors

    // vector <int> vec ={3,-4,5,4,-1,7,-8};
    // int currsum=0, maxsum=INT_MIN;

    // for(int i : vec)  // for each element in the vector
    // {
    //     currsum+= i;
    //     maxsum= max(maxsum, currsum);

    //     if(currsum<=0)
    //     {
    //         currsum=0;
    //     }
    // }

    // cout<<"the max sum of a subarray is "<<maxsum<<endl;

    return 0;
}