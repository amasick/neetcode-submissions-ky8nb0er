class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        int n=temperatures.size();
        vector<int>results(n, 0);
        int k=0;
        while(k<n){
            while(!s.empty() && temperatures[s.top()] < temperatures[k]){
                int j=s.top();
                s.pop();
                results[j] = k - j;
            }
            s.push(k);
            k++;
        }
        return results;
    }
};
