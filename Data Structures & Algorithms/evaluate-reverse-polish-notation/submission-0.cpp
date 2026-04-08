class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>curr_st;
        stack<int>ans_st;
        int n=tokens.size();
        
        for(int i=0;i<tokens.size();i++){
            string s1=tokens[i];
if(s1!="+" && s1!="-" && s1!="*" && s1!="/"){                int temp=stoi(s1);
                curr_st.push(temp);

             }
             else{
                int a=curr_st.top();
                curr_st.pop();
                int b=curr_st.top();
                curr_st.pop();
                if(s1=="+"){
                    curr_st.push(a+b);
                }
                else if(s1=="*"){
                    curr_st.push(a*b);
                }
                else if(s1=="-"){
                    curr_st.push(b-a);
                }
                else {
                    curr_st.push(b/a);

                }

             }
        }
       return curr_st.top();
    }
};
