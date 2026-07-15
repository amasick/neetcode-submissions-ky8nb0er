class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty()) return 0;

        set<int> s;

        for (int x : nums)
            s.insert(x);

        int ans = 1;
        int temp = 1;

        auto it = s.begin();

        while (next(it) != s.end()) {

            if (*next(it) == *it + 1) {
                temp++;
                ans = max(ans, temp);
            } else {
                temp = 1;
            }

            ++it;
        }

        return ans;
    }
};