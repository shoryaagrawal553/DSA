#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[n]={5,34,22,1,61,36};
    int i, target;

    cout<<"enter the target ";
    cin>>target;

    for(i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            cout<<target<<" found at index "<<i<<" and position "<<i+1;
            return 0;
        }
    }

    cout<<target<<" not found in the array ";
    
    return 0;
}