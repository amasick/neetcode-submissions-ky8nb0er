class Solution {
public:
      bool isSafe(int x,int y,vector<vector<int>>&grid,vector<vector<bool>>&vis){
    int n=grid.size();
    int m=grid[0].size();

        if((x<n && x>=0) && (y>=0 &&y<m)&& !vis[x][y] && grid[x][y]==1)return true;

        return false;

      }

     int bfs(int i,int j,vector<vector<int>>&grid,vector<vector<bool>>&vis){
        int dx[4]={1,0,-1,0};
        int dy[4]={0,-1,0,1};
        int area=1;

        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=true;
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(isSafe(nx,ny,grid,vis)){
                area++;
                vis[nx][ny]=true;
                q.push({nx,ny});
                }
            }
        }
        return area;

         
     }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxArea=0;
int n=grid.size();
int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));

        

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                      if(grid[i][j]==1 && !vis[i][j])maxArea=max(maxArea,bfs(i,j,grid,vis));
            }
        }
        return maxArea;
        
    }
};
