class Solution {
public:
int helper(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp){
  
  if(i>=triangle.size())return 0;

  if(dp[i][j]!=-1)return dp[i][j];
  int op1=triangle[i][j]+helper(i+1,j+1,triangle,dp);
  
  int op2=triangle[i][j]+helper(i+1,j,triangle,dp);
  return dp[i][j]=min(op1,op2);
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
       
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1)) ;
      return helper(0,0,triangle,dp);
    }
};
