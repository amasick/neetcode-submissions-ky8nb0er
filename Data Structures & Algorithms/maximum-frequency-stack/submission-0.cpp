class FreqStack {
public:
   unordered_map<int,int>mp;
   unordered_map<int,stack<int>>grps;
   int maxfreq=0;
    FreqStack() {
        
    }
    
    void push(int val) {
       mp[val]++;
       maxfreq=max(maxfreq,mp[val]);
       grps[mp[val]].push(val);
        
    }
    
    int pop() {
             int ans=grps[maxfreq].top();
             grps[maxfreq].pop();
             mp[ans]--;
             if(grps[maxfreq].empty())maxfreq--;
             
             
             return ans;

    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */