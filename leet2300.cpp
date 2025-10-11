/* 2300. Successful Pairs of Spells and Potions 
    You are given two positive integer arrays spells and potions, of length n and m respectively, where spells[i] 
    represents the strength of the ith spell and potions[j] represents the strength of the jth potion.
    You are also given an integer success. A spell and potion pair is considered successful if the product of 
    their strengths is at least success.
    Return an integer array pairs of length n where pairs[i] is the number of potions that will form a successful 
    pair with the ith spell.
Example 1:
    Input: spells = [5,1,3], potions = [1,2,3,4,5], success = 7
    Output: [4,0,3]
    Explanation:
        - 0th spell: 5 * [1,2,3,4,5] = [5,10,15,20,25]. 4 pairs are successful.
        - 1st spell: 1 * [1,2,3,4,5] = [1,2,3,4,5]. 0 pairs are successful.
        - 2nd spell: 3 * [1,2,3,4,5] = [3,6,9,12,15]. 3 pairs are successful.
    Thus, [4,0,3] is returned.
Constraints:

n == spells.length
m == potions.length
1 <= n, m <= 10^5
1 <= spells[i], potions[i] <= 10^5
1 <= success <= 10^10      */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        vector<int> ans;    

        // for(long long i: spells) // gave TLE
        // {  
        //     int count =0;

        //     for(long long j:potions)
        //     {
        //         if((i*j) >= success) count++;
        //     }
        //     ans.push_back(count);
        // }

        sort(potions.begin(), potions.end());
        int n = potions.size();

        for(long long i: spells)
        {
            int st=0, en=n-1;
            int count =0;
            // int idx = -1;  // if there is no such index where the product is >= success
            while(st<=en)
            {
                int mid= st + (en-st)/2;

                if(i*potions[mid] >= success)
                {
                    // idx = mid;  // to find the first index where the product is >= success (remove count logic)
                    count += (en-mid + 1) ;
                    en = mid-1;
                    
                }
                else st = mid+1;
            }
            // ans.push_back(n-idx);  //the count of elements from idx to end
            ans.push_back(count);
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> spells = {5,1,3};
    vector<int> potions = {1,2,3,4,5};
    int success = 7;

    vector<int> ans = obj.successfulPairs(spells, potions, success);

    for(int i: ans) cout<<i<<" ";

    return 0;
}