#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// optimal approach using unordered maps 
vector<int> twoSum(vector<int>& nums, int target)
{
    //unordered_map<key_type, value_type>
    unordered_map<int, int> map;
    vector<int> ans;

    for(int i=0; i<nums.size(); i++)
    {
        int first= nums[i];
        int second= target - first;

        if(map.find(second) != map.end())
        {
            ans.push_back(i);
            ans.push_back(map[second]);
            break;
        }

        else map [first] =i; // i is the value of key first [first, i]
    }

    return ans;
}


int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9; 
    // vector<int> nums = {3, 2, 4};
    // int target = 6; 
    // vector<int> nums = {3, 3};
    // int target = 6;
    vector<int> result = twoSum(nums, target);

    if(result.size() == 2)      
    {
        cout << "Indices of the two numbers that add up to " << target << " are: "<< result[0] << " and " << result[1] << endl;
    }

    return 0;
}

/* BRUTE FORCE :- O(n^2), using nested loop, checking each pair -> for(int i=0; i<n; i++){ for(int j=i+1;j<n j++) }
BETTER APPROACH:- sort array; while(st<en){ if(sum<target){st++;}  else en--;}
*/