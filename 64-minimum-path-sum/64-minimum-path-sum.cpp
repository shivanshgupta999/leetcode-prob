class Solution {
public:
    int fn(vector<vector<int>>& grid , int n, int m , vector<vector<int>>& dp ){
        if(n==1 && m==1){
            return grid[0][0];
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        int x=INT_MAX,y=INT_MAX;
        if(n>1)
        x= fn(grid,n-1,m,dp);
       if(m>1)
        y=fn(grid,n,m-1,dp);
         dp[n][m]= min(x,y) + grid[n-1][m-1];
        return dp[n][m];
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int n= grid.size();
        int m= grid[0].size();
        vector<vector<int>> dp(n+1 ,vector<int>(m+1,-1) );
        return fn(grid,n,m,dp);
    }
};