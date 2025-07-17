/* leetcode problem 2410 Maximum Matching of Players With Trainers
You are given a 0-indexed integer array players, where players[i] represents the ability of the ith player. 
You are also given a 0-indexed integer array trainers, where trainers[j] represents the training capacity
of the jth trainer.
The ith player can match with the jth trainer if the player's ability is less than or equal to the 
trainer's training capacity. Additionally, the ith player can be matched with at most one trainer, 
and the jth trainer can be matched with at most one player.
Return the maximum number of matchings between players and trainers that satisfy these conditions.

Example 1:
Input: players = [4,7,9], trainers = [8,2,5,8]
Output: 2
Explanation:
One of the ways we can form two matchings is as follows:
- players[0] can be matched with trainers[0] since 4 <= 8.
- players[1] can be matched with trainers[3] since 7 <= 8.
It can be proven that 2 is the maximum number of matchings that can be formed.     */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
{
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());

    int n= players.size(), m=trainers.size();
    int p=0, t=0, count=0;

    while(p<n && t<m)
    {
        if(players[p] <= trainers[t])
        {
            count++;
            p++; t++;
        }
        else t++;
    } 

    return count;   
}

int main()
{
    vector<int> players = {4, 7, 9};  //{1,1,1}
    vector<int> trainers = {8, 2, 5, 8};  //{10}  
    int result = matchPlayersAndTrainers(players, trainers);
    cout << "Maximum number of matchings: " << result << endl;

    
    return 0;
}