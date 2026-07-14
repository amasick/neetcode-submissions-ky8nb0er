class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
auto comp = [](pair<int,int> a, pair<int,int> b) {
    if (a.second == b.second)
        return a.first > b.first;   // smaller first gets higher priority
    return a.second < b.second;     // larger second gets higher priority
};
        priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        decltype(comp)
        >pq(comp);
        for(auto &it:mp)
        {
            pq.push({it.first,it.second});
        }
        vector<int>ans;
        while(k-- &&!pq.empty()){
                auto it=pq.top();
                
            ans.push_back(it.first);
            pq.pop();
        }
        return ans;

        
    }
};
