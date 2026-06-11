class Solution {
public:

    bool rowBs(vector<int>& v, int target) {
        int lo = 0, hi = v.size() - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (v[mid] == target) return true;
            else if (v[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> temp;

        for (auto& row : matrix) {
            temp.push_back(row[0]);
        }

        int n = matrix.size();

        int t = lower_bound(temp.begin(), temp.end(), target) - temp.begin();

        if (t < n && temp[t] == target) {
            return true;
        }

        if (t == 0) {
            return false;
        }

        return rowBs(matrix[t - 1], target);
    }
};