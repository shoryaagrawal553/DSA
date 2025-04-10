// This program checks if any two numbers in the array add up to a target number

#include <iostream>
#include <vector>
using namespace std;

// Function to find two indices whose values sum up to the target using an optimal approach
vector<int> check_sum(vector<int> a, int tar) {
    int n = a.size();         // Size of the input array
    vector<int> ans;          // To store the result indices
    
    int st = 0, en = n - 1;   // Two pointers, one starting from the beginning and the other from the end

    while (st < en) {         // Loop until the two pointers meet
        int sum = a[st] + a[en]; // Calculate the sum of the two elements at the pointers
        if (tar < sum) {
            en--;             // If the sum is greater than the target, move the end pointer left
        } else if (tar > sum) {
            st++;             // If the sum is less than the target, move the start pointer right
        } else if (tar == sum) { // If the sum equals the target
            ans.push_back(st); // Store the indices of the two elements
            ans.push_back(en);
            return ans;       // Return the result
        }
    }
    return ans;               // Return an empty vector if no pair is found
}

int main() {
    vector<int> arr = {2, 7, 11, 15}; // Input array
    int target;                       // Target sum

    cout << "Enter target: ";
    cin >> target;                    // Input the target sum

    vector<int> ans = check_sum(arr, target); // Call the function to find the pair

    if (ans.empty()) {                // If no pair is found
        cout << "No pair found";
    } else {                          // If a pair is found
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl; // Print indices
        cout << "Values: " << arr[ans[0]] << ", " << arr[ans[1]] << endl; // Print values
    }

    return 0; // End the program
}
