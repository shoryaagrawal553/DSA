#include <iostream>
#include <vector>
using namespace std;

void recFunc(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, vector<bool>& visited)
{ // took temp and visited also as refrence to reduce stack space hence makes it more efficient
    if(temp.size() == visited.size())
    {
        ans.push_back(temp);
        return;
    }

    for(int i=0; i< visited.size(); i++)
    {
        if(!visited[i])
        {
            visited[i] = 1;
            temp.push_back(nums[i]);
            recFunc(nums, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) 
{
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(nums.size(), 0);

    recFunc(nums, ans, temp, visited);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    // vector<int> nums = {0, 1};
    // vector<int> nums = {1, 2, 3, 4};
    vector<vector<int>> result = permute(nums);

    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}