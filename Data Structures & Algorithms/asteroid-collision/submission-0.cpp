class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        
      vector<int>st;

      for(auto &curr:ast){
        bool alive=true;
        while(!st.empty() && alive && curr<0 &&st.back()>0 ){

            if(abs(st.back())> abs(curr)){//curr dies
            alive=false;
               



            }
            else if(abs(st.back())==abs(curr)){//both dies
            st.pop_back();
            alive=false;



            }
            else{  // stack top dies
               st.pop_back();

            }

        }
        if(alive){
            st.push_back(curr);
        }
        


         
      }
      return st;
    }
};