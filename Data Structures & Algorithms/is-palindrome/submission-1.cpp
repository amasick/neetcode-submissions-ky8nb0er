// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string s1="";
//         for(char &c:s){
//             if(isalnum(c)){
//                 char c1=tolower(c);
//                 s1+=c1;
//                 // cout<<c1<<" ";
//             }
//         }
//         cout<<endl;
//         int n=s1.length();
//         for(int i=0;i<n/2+1;i++){
//             // cout<<"first:"<<s1[i]<<" "<<"last:"<<s1[n-i-1]<<endl;
//             if(s1[i]!=s1[n-i-1])return false;
//         }
//         return true;

        
//     }
// };

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;

        while (start < end) {
            while (!isalnum(s[start])) start++;
            while (!isalnum(s[end])) end--;

            if (start < end && toupper(s[start]) != toupper(s[end])) return false;

            start++, end--;
        }

        return true;
    }
};

