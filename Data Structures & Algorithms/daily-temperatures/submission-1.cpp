class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        int n=temperatures.size();
        vector<int>results(n, 0);

        int i=0;
        while(i<n){

            while(!s.empty() && temperatures[s.top()]<temperatures[i]){
                int k=s.top();
                
                results[k] = i-k;
                s.pop();
            }
            s.push(i);
            i++;
        }
        return results;
    }
};