#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans; // To store the subsets

    void helper(vector<int>& A, vector<int>& temp, int i) {
        // Base case: if we've considered all elements
        if (i == A.size()) {
            ans.push_back(temp);
            return;
        }

        // Include A[i]
        temp.push_back(A[i]);
        helper(A, temp, i + 1);
        
        // Exclude A[i]
        temp.pop_back();
        helper(A, temp, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& A) {
        vector<int> temp; // Temporary vector to store current subset
        helper(A, temp, 0);    // Start recursion from index 0
        sort(ans.begin(), ans.end()); // Optional: sort subsets
        return ans; // Return all subsets
    }
};
