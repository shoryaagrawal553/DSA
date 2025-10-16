/*leet code question 22: Generate Parentheses
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
Example 1:
    Input: n = 3
    Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:
    Input: n = 1
    Output: ["()"] 
Constraints:
    1 <= n <= 8      */

#include <bits/stdc++.h>
using namespace std;

void addParenthesis(int n, int l, int r, vector<string>& ans, string temp)
{
    if(l==n && r==n)
    {
        ans.push_back(temp);
        return;
    }

    if(l<n)  // add left parenthesis
    {
        // temp += '(';
        addParenthesis(n, l+1, r, ans, temp + '(');
    } 

    if(l>r && l<=n)   // add right prenthesis
    {
        // temp += ')';
        addParenthesis(n, l, r+1, ans, temp + ')');
    }
    

    // if(l==n && r<n)   // no need for this condition as it is covered in the above condition
    // {
    //     // temp += ')';
    //     addParenthesis(n, l, r+1, ans, temp+')');
    // }
}

vector<string> generateParenthesis(int n) 
{
    vector<string> ans;
    //string temp;
    addParenthesis(n, 0, 0, ans, "");

    return ans;
}

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    vector<string> ans = generateParenthesis(n);

    for(string s: ans)
    {
        cout<<s<<endl;
    }

    return 0;
}