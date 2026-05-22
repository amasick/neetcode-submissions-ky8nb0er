class Solution {
public: 
static bool comparator(const pair<int,int>&a,const pair<int,int>&b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first>b.first;
}
     
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>>pos_speed(n);
        for(int i=0;i<n;i++){
            pos_speed[i]={position[i],speed[i]};
        }
       
        sort(pos_speed.begin(),pos_speed.end(),comparator);

        vector<double>time;
        for(int i=0;i<n;i++){
            time.push_back((double)(target - pos_speed[i].first) / pos_speed[i].second );


        }
        stack<double>t;
        t.push(time[0]);
        for(int i=0;i<n;i++){
            if(time[i]<=t.top()){
                continue;
            }
            else {
                t.push(time[i]);
            }
        }
        return t.size();
    }
};
