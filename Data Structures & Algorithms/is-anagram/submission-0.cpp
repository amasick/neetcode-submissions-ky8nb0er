class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>s1(26,0);
        vector<int>t1(26,0);
        int n=s.length();
        int m=t.length();

        for(int i=0;i<n;i++){
            int temp=s[i]-'a';
            s1[temp]+=1;
        }
         for(int i=0;i<m;i++){
            int temp=t[i]-'a';
            t1[temp]+=1;
        }
        return s1==t1;
    }
};
