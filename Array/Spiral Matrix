class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
      int fl=0;
      int n=mat.size()-1;
      int m=mat[0].size()-1;
      int r=0;
      int c=0;
      vector<int>v;
      while(r<=n&&c<=m){
        if(fl==0){
          for(int i=c;i<=m;i++){
            v.push_back(mat[r][i]);
          
          }
            r++;
        }
        else if(fl==1){
          for(int i=r;i<=n;i++){
            v.push_back(mat[i][m]);
            
          }
          m--;
        }
        else if(fl==2){
          for(int i=m;i>=c;i--){
             v.push_back(mat[n][i]);
            
          }
          n--;
        }
        else if(fl==3){
          for(int i=n;i>=r;i--){
             v.push_back(mat[i][c]);
            
          }
          c++;
        }
        fl=(fl+1)%4;
      }
      return v;
    }
};
