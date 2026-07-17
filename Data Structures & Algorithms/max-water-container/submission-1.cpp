class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n=heights.size();
int maxArea=0;
      
                // maxArea=max(maxArea,(min(heights[i],heights[j])*(j-i)));

                int i=0;
                int j=n-1;
                while(i<j){

                    maxArea=max(maxArea,(min(heights[i],heights[j])*(j-i)));
                    if(heights[i]<heights[j])i++;
                    else{
                        j--;
                    }

                }
            
        
        return maxArea;

        




        

    }
};
