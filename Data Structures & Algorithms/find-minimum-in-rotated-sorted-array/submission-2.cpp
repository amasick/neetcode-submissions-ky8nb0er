class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size()-1;

        while(lo < hi) {

            int mid = lo + (hi-lo)/2;

            // already sorted
            if(nums[lo] <= nums[hi])
                return nums[lo];

            // left half sorted
            if(nums[lo] <= nums[mid]) {
                lo = mid + 1;
            }
            // right half sorted
            else {
                hi = mid;
            }
        }

        return nums[lo];
    }
};