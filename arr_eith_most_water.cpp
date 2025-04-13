// leet code problem number: 11
/*You are given an integer array height of length n. There are n vertical 
lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, 
such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.  */

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height)  // brute force approach 
{
    int n= height.size();
    int maxa = 0;
    int w, h; // w = width   h = height 
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            w = j-i;                        // width of the container
            h = min(height[i], height[j]);  // height of the container
            int area = w * h;               // area of the container (rectangle)

            // int area= min(height[i], height[j]) * (j-i); 

            maxa= max(maxa, area);
        }
    }

    return maxa;
    
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7}; // Example input
    // vector<int> height = {1,1}; // Example input
    // vector<int> height = {4,3,2,1,4}; // Example input

    cout<<"max area is: "<<maxArea(height)<<endl; // Output the maximum area
    return 0;
}

//optimal approach in leet11.cpp