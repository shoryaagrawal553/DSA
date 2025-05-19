#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    int i;

    for(i=1; i<n; i++) //i=
    {
        int curr= arr[i]; // curr = arr[1]= 1
        int prev= i-1;  // prev= 1-1= 0 (index)

        while(curr>=0 && curr<arr[prev])
        {
            arr[prev+1] = arr[prev];  //arr[0+1=1]  = arr[0] (= 4)
            prev--;                   // we can put index 0 value in index 1     since its already 
        }                             // stored in a second var which is curr
        arr[prev+1]= curr;
    }

    for ( i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr={4, 1, 5, 2, 3};
    int n= arr.size();

    cout<<"The sorted array is: \n";
    insertionSort(arr, n);

    return 0;
} 
