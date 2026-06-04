class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int maxArea = 0;
    
    for (int i = 0; i < n; i++) {
        int minHeight = heights[i];         
        
        for (int j = i; j < n; j++) {
            minHeight = min(minHeight, heights[j]);  
            int width = j - i + 1;
            maxArea = max(maxArea, minHeight * width);
        }
    }
    return maxArea;
}
};
