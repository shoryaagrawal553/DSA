#include<iostream>
using namespace std;

int linSearch(int arr[], int k, int n)
{
    if(n<0) return n;

    if(arr[n] == k) return n;

    return linSearch(arr, k, n-1);
} // return n if you want index of the element and function data type to int

int main()
{
    int arr[]= {2, 5, 1, 6, 8, 10, 7};
    int k= 1;

    // if(linSearch(arr, k, 6)) cout<<"element found!!!!";

    // else cout<<"element not found ";

    // cout<<linSearch(arr, k, 6);

    return 0;
}