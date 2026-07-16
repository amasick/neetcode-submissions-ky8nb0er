class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();

        for (int k = 0; k < n - 2; k++) {

            // Skip duplicate first elements
            if (k > 0 && nums[k] == nums[k - 1])
                continue;

            int i = k + 1;
            int j = n - 1;

            while (i < j) {
                int sum = nums[k] + nums[i] + nums[j];

                if (sum < 0) {
                    i++;
                } else if (sum > 0) {
                    j--;
                } else {
                    ans.push_back({nums[k], nums[i], nums[j]});

                    i++;
                    j--;

                    // Skip duplicate second elements
                    while (i < j && nums[i] == nums[i - 1])
                        i++;

                    // Skip duplicate third elements
                    while (i < j && nums[j] == nums[j + 1])
                        j--;
                }
            }
        }

        return ans;
    }
};