class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(char &c:s){
            if(isalnum(c)){
                char c1=tolower(c);
                s1+=c1;
                // cout<<c1<<" ";
            }
        }
        cout<<endl;
        int n=s1.length();
        for(int i=0;i<n/2+1;i++){
            // cout<<"first:"<<s1[i]<<" "<<"last:"<<s1[n-i-1]<<endl;
            if(s1[i]!=s1[n-i-1])return false;
        }
        return true;

        
    }
};
