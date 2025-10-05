/* leet code 78. Subsets
Given an integer array nums of unique elements, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.
 */

#include <iostream>
#include<vector>
using namespace std;

void subSequence(int arr[], int n, int idx, vector<vector<int>>& ans, vector<int> temp)
{
    if(idx==n) 
        ans.push_back(temp);
        return ;

    subSequence(arr, n, idx+1, ans, temp);  // arr[idx] not taken case

    temp.push_back(arr[idx]);  // arr[idx] taken case
    subSequence(arr, n, idx+1, ans, temp);   // then call for next index
}

int main()
{
    int arr[]={1,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> ans;  // to store all the subsets
    vector<int> temp;  // to store current subset
    subSequence(arr, n, 0, ans, temp);  // starting from index 0

    for(auto i: ans)  // print all the subsets
    {
        cout<<"{ ";
        for(auto j: i)
        {
            cout<<j<<" ";
        }    
        cout<<"}"<<endl;
    }

    return 0;
}

/*   aim is to generate power set of an array using recursion
power set is the set of all subsets of a set including empty set and the set itself
for example if arr[]={1,2,3} then power set is {{}, {1}, {2}, {3}, {1,2}, {2,3}, {1,3}, {1,2,3}}
total number of subsets of a set of size n is 2^n
time complexity is O(n*2^n) where n is the size of the array
space complexity is O(n*2^n) for storing the subsets in ans vector */ 

///////////////////////////////////////////////////////////////////////////////////

// approach is to use recursion and backtracking
// at each index we have two choices either to include the element at that index in the current 
//subset or not
// we will use a temporary vector to store the current subset and a 2D vector to store all the subsets
// we will start from index 0 and at each index we will make two recursive calls one including the element
// at that index and other excluding it
// when we reach the end of the array we will add the current subset to the 2D vector
// we will use backtracking to remove the last element added to the current subset before making the next recursive call
// this way we will generate all the subsets of the array
// finally we will return the 2D vector containing all the subsets  

/////////////////////////////////////////////////////////////////////////////////

// example dry run for arr[]={1,2}
// initially ans={} and temp={} 
// at index 0 we have two choices either to include 1 or not
// if we don't include 1 then we move to index 1 with temp={}
// at index 1 we have two choices either to include 2 or not
// if we don't include 2 then we move to index 2 with temp={}
// at index 2 we have reached the end of the array so we add temp={} to ans={{}}
// if we include 2 then we move to index 2 with temp={2}
// at index 2 we have reached the end of the array so we add temp={2} to ans={{}, {2}}
// if we include 1 then we move to index 1 with temp={1}
// at index 1 we have two choices either to include 2 or not
// if we don't include 2 then we move to index 2 with temp={1}
// at index 2 we have reached the end of the array so we add temp={1} to ans={{}, {2}, {1}}
// if we include 2 then we move to index 2 with temp={1,2
// at index 2 we have reached the end of the array so we add temp={1,2} to ans={{}, {2}, {1}, {1,2}}
// finally we return ans={{}, {2}, {1}, {1,2}} which is the power set of arr[]={1,2}
