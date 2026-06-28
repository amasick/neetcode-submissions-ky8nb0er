class Solution {
public:
 int n, m;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
int dfs(int x,int y,vector<vector<int>>& grid){

    stack<pair<int,int>> st;

    st.push({x,y});
    grid[x][y]=0;

    int area=0;

    while(!st.empty()){

        auto [cx,cy]=st.top();
        st.pop();

        area++;

        for(int k=0;k<4;k++){

            int nx=cx+dx[k];
            int ny=cy+dy[k];

            if(nx>=0 && nx<n &&
               ny>=0 && ny<m &&
               grid[nx][ny]==1){

                grid[nx][ny]=0;
                st.push({nx,ny});
            }
        }
    }

    return area;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        n = grid.size();
        m = grid[0].size();

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 1)
                    ans = max(ans, dfs(i, j, grid));
            }
        }

        return ans;
    }
};
