class Solution {
public:
    int trap(vector<int>& v) {
        /*
        for every index we find the max
         height on left and right and take minmum 
          of those two hieght and from this if we 
          minum heoght of current index we get hieght 
          of water at current index
          */

          int n=v.size();
          if(n<=2)return 0;
          vector<int>leftMax(n);
          vector<int>rightMax(n);
          leftMax[0]=-1;
          int temp=INT_MIN;
           cout<<"leftMax"<<endl;
          for(int i=1;i<n;i++){
            
            temp=max(v[i-1],temp);
            leftMax[i]=temp;
           
            cout<<i<<" :"<<leftMax[i]<<" ";
            
          }
           cout<<"rightMax"<<endl;
           int temp2=INT_MIN;
           rightMax[n-1]=-1;
          for(int i=n-2;i>=0;i--){
            
            temp2=max(v[i+1],temp2);
            rightMax[i]=temp2;
            
            cout<<i<<" :"<< rightMax[i]<<" ";
            
          }
          int ans=0;

          for(int i=0;i<n;i++){
            int currWater= min(leftMax[i],rightMax[i])-v[i];
            if(currWater<0)continue;
            else{
                cout<<"i:"<<i<<" "<<"waterlevel"<<" "<<currWater<<" "<<endl;
                ans+=currWater;
            }

          }
          return ans;

         

          
        
        
    }
};
