class Solution {
public:
    int maxProfit(vector<int>& arr) {
      int maxProfit=0;
      int n=arr.size();
      // 10
      // 1,5,7
      // 5,6,7
      // 6,7
      // 10,5,1
      // 1 2 3 4 5 6 5 3
      int smallestSoFar=0;
      int profit=0;
    for(int i=0;i<n;i++){
      if(arr[i]<arr[smallestSoFar])smallestSoFar=i;
      profit=max(profit,arr[i]-arr[smallestSoFar]);
    }

  return profit;
        
    }
};
