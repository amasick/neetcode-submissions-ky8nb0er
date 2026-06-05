class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stk;    
        string token = "";
        int i = 0;

        while(i <= path.length()) {
            if(i == path.length() || path[i] == '/') {
             
                if(token == "" || token == ".") {
               
                }
                else if(token == "..") {
                    if(!stk.empty()) stk.pop_back(); 
                }
                else {
                    stk.push_back(token);             
                }
                token = "";
            } else {
                token += path[i];
            }
            i++;
        }

     
        string ans = "";
        for(string& dir : stk) ans += "/" + dir;
        return ans.empty() ? "/" : ans;
    }
};