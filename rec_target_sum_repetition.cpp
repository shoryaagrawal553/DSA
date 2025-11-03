// in a given positive array, find the number of subsets with sum equal to a given target

#include <iostream>
#include<vector>
using namespace std;

int tarSum(vector<int> arr, int n, int sum, int idx )
{
    if(sum == 0) return 1; 
    if(idx==n || sum<0) return 0;  
    // once the sum becomes -ve there is no ay to make it +ve since, there are no -ve no. in array{-sum -(-x) = -sum+x} 

    return tarSum(arr, n, sum, idx+1) + tarSum(arr, n, sum-arr[idx], idx);
    // not include the element at idx + include the element at idx
}

int main()
{
    vector<int> arr={2, 3, 4};  // ans =3  -> {2,2}, {2,4} and {3,3}
    int target=6;
    int n=arr.size();
    cout<<"The number of subsets with sum equal to "<<target<<" is: "<<tarSum(arr, n, target, 0)<<endl;
    return 0;
}
