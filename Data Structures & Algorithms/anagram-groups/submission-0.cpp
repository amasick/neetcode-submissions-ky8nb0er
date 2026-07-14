class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<int>>arr(n,vector<int>(27,0)); //string all freq of string char
        vector<vector<string>>ans;
        vector<bool>vis(n,false);  //for storing visited strings
        

        //string all freq of charcs of strings
        for(int i=0;i<n;i++){
            for(int j=0;j<strs[i].length();j++){
                int k=strs[i][j]-'a';
                arr[i][k]+=1;
            }
            
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<27;j++)
        //     {
        //         cout<<arr[i][j]<< " ";

        //     }
        //     cout<<endl;
        // }

        //checking number of same freq vectors
        for(int l=0;l<n;l++){
            vector<string>temp;
           
          


            for(int m=l;m<n;m++){
                if(arr[l]==arr[m] && vis[m] == false){
                    temp.push_back(strs[m]);
                    vis[m]=true;


                }

            }
            // temp.push_back(strs[l]);
            if(temp.size()!=0)
            ans.push_back(temp);
        }
    
        return ans;
    }
};
