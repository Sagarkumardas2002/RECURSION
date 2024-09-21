class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsetSize=(1 << n);  // 2^n
        vector<vector<int>> result; // this is used to store the total list 
        for (int i = 0; i < ; i++) {
            vector<int> subset; // this is used to store the set bits in the subset 
            for (int j = 0; j < n; j++) {
              //push the nums[j] to subset if jth bit in the integer i is set 
                if ((1 << j) & i) {
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }
        return result;
    }
};
