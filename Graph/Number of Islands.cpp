class Solution {
public:
void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& visited){
    int n=grid.size();
    int m=grid[0].size();
    visited[i][j]=1;
    queue<pair<int,int>>q;
    q.push({i,j});
    int dr[]={0,0,1,-1};
    int dc[]={1,-1,0,0};
    while(!q.empty()){
        auto node=q.front();
        q.pop();
        int r=node.first;
        int c=node.second;
        
        for(int i=0;i<4;i++){
         int nr=r+dr[i];
         int nc=c+dc[i];
         if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]=='1'&&!visited[nr][nc]){
            q.push({nr,nc});
            visited[nr][nc]=1;
         }
        }
            
    }
}
    int numIslands(vector<vector<char>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>visited(n,vector<int>(m,0));
      int island=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j]&&grid[i][j]=='1'){
                island++;
                bfs(i,j,grid,visited);
            }
        }
      }  
      return island;
    }
};
