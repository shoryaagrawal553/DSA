/*leetcode 3000. Maximum Area of Longest Diagonal Rectangle
You are given a 2D 0-indexed integer array dimensions.
For all indices i, 0 <= i < dimensions.length, dimensions[i][0] represents the length and dimensions[i][1] 
represents the width of the rectangle i.
Return the area of the rectangle having the longest diagonal. If there are multiple rectangles with the 
longest diagonal, return the area of the rectangle having the maximum area.
Example 1:
    Input: dimensions = [[9,3],[8,6]]
    Output: 48
    Explanation: 
        For index = 0, length = 9 and width = 3. Diagonal length = sqrt(9 * 9 + 3 * 3) = sqrt(90) ≈ 9.487.
        For index = 1, length = 8 and width = 6. Diagonal length = sqrt(8 * 8 + 6 * 6) = sqrt(100) = 10.
        So, the rectangle at index 1 has a greater diagonal length therefore we return area = 8 * 6 = 48.
Example 2:
    Input: dimensions = [[3,4],[4,3]]
    Output: 12
    Explanation: Length of diagonal is the same for both which is 5, so maximum area = 12.   */

#include <iostream>
#include <vector>
using namespace std;

int areaOfMaxDiagonal(vector<vector<int>>& d) 
{
    int dia=0;
    int maxdia= INT_MIN;
    int maxArea=0;

    for(int i=0; i<d.size(); i++)
    {
        dia= (d[i][0] * d[i][0]) + (d[i][1] * d[i][1]);  //no need of sqrt Because the square root doesn’t 
        int area =d[i][0]*d[i][1];                       // change which diagonal is bigger.

        if(dia > maxdia) 
        {
            maxdia=dia;
            maxArea= area;
        }

        else if(dia == maxdia)
        {
            maxArea= max(maxArea, area);
        }
    }

    return maxArea ;
}

/*In your example:

For [10,3]: diagonal = sqrt(100+9) = sqrt(109) ≈ 10.44 → stored as 10

For [5,9]: diagonal = sqrt(25+81) = sqrt(106) ≈ 10.29 → stored as 10

For [8,3]: diagonal = sqrt(64+9) = sqrt(73) ≈ 8.54 → stored as 8

So both [10,3] and [5,9] end up with the same dia=10 after truncation, and your if(maxdia==dia) 
picks the last one with maxdia (i.e. [5,9]).
Thus result = 5*9 = 45, instead of 10*3 = 30.  */

int main()
{
    vector<vector<int>> dimensions = {{10,3},{5,9},{8,3}}; //expected output 30
    // vector<vector<int>> dimensions = {{9,3},{8,6}}; //expected output 48
    // vector<vector<int>> dimensions = {{3,4},{4,3}}; //expected output 12
    cout<< areaOfMaxDiagonal(dimensions)<<endl;
    return 0;
}