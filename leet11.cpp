/*You are given an integer array height of length n. There are n vertical 
lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, 
such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.  */

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) 
{
    int n= height.size();

    // Initialize maximum area to 0
    int maxa = 0, area;

    // Two pointers: one starting from the beginning, one from the end
    int st=0, en= n-1;

    while(st<en)
    {
        // Calculate the area formed between the two lines:
        // The height is the minimum of the two lines
        // The width is the horizontal distance between them
        if(height[st]<height[en])
        {
            // height[st] is the limiting factor, so we use it as the container's height
            area= height[st] * (en-st);

            // Move the left pointer to the right to find a potentially taller line
            // to maximize the area
            st++;
        }

        else //if(height[en]<height[st])
        {
            // height[en] is less or equal, so it limits the water container
            area= height[en] * (en-st);

             // Move the right pointer backward to try and find a taller line
            en--;
        }

        maxa= max(maxa, area);   // Update the maximum area if we found a larger one
    }
    return maxa;
    
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7}; // Example input
    // vector<int> height = {1,1}; // Example input
    // vector<int> height = {4,3,2,1,4}; // Example input

    return 0;
}

/*🧠 Logic Summary:
You're using the two-pointer technique because brute force (O(n²)) is inefficient.

At each step, you calculate the area between the lines at st and en.

Since the shorter line limits the area, you move the pointer pointing 
to the shorter line hoping to find a taller one.

You continue until both pointers meet.

This ensures an optimal and efficient O(n) time solution.  */