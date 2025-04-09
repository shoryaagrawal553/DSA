// check if any two numbers in the array add up to a target number

#include <iostream>
#include<vector>
using namespace std;

// vector<int> check_sum(vector<int> a,  int tar)  // brute force approach, O(n^2)
// {
//     int n= a.size();
//     vector<int> ans;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(a[i]+a[j]== tar)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     return ans;
// }

vector<int> check_sum(vector<int> a,  int tar)   //optimal approach
{
    int n=a.size();
    vector<int> ans;

    int st=0, en=n-1;

    while(st<en)
    {
        int sum=a[st]+a[en];
        if(tar< sum)
        {
            en--;
        }

        else if(tar>sum)
        {
            st++;
        }

        else if(tar==sum)
        {
            ans.push_back(st);
            ans.push_back(en);
            return ans; 
        }
    }
    return ans;
}

int main()
{
    vector<int> arr={2,7,11,15};
    int target;

    cout<<"enter target ";
    cin>>target;

    vector<int> ans = check_sum(arr, target);

    if (ans.empty())
    {
        cout << "No pair found";
    }
    else
    {
        cout << "Indices: " << ans[0] << ", " << ans[1]<<endl;
        cout << "values: " << arr[ans[0]] << ", " << arr[ans[1]]<<endl;
    }


    return 0;
}