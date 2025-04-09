#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int n = 5;
    int arr[n] = {4, 10, 6, 20, 2};
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)  // first largest element
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }

    int ans2 = INT_MAX;
    for (int i = 0; i < n; i++)  // second largest element
    {
        if (arr[i] < ans2)
        {
            ans2 = arr[i];
        }
    }

    cout<<"second largest element of the array\n ";

    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nis: "<<ans2<<endl;

    return 0;
}