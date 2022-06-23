class Solution {
public:
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
           vector<vector<long long >> dp(m+1,vector<long long > (n+1,0));
        for (auto& p: prices)
            dp[p[0]][p[1]] = p[2];
        
        
        /* for (int w = 1; w <= m; ++w) {
            for (int h = 1; h <= n; ++h) {
                for (int a = 1; a <= w / 2; ++a)
                    dp[w][h] = max(dp[w][h], dp[a][h] + dp[w - a][h]);
                for (int a = 1; a <= h / 2; ++a)
                    dp[w][h] = max(dp[w][h], dp[w][a] + dp[w][h - a]);
            }
        }*/
        for(int i=1;i<=m;++i){
           for(int j=1;j<=n;++j){
            for(int k=1; k<=i/2 ; ++k)
                dp[i][j]=max(dp[i][j], dp[k][j]+dp[i-k][j] );
            
               for(int k=1;k<=j/2;++k)
                dp[i][j]=max(dp[i][j], dp[i][k]+dp[i][j-k] );
            
        }
        }
      
  return dp[m][n];
}
};
/*
 long long sellingWood(int m, int n, vector<vector<int>>& prices) {
    
        for (auto& p: prices)
            dp[p[0]][p[1]] = p[2];
        for (int w = 1; w <= m; ++w) {
            for (int h = 1; h <= n; ++h) {
                for (int a = 1; a <= w / 2; ++a)
                    dp[w][h] = max(dp[w][h], dp[a][h] + dp[w - a][h]);
                for (int a = 1; a <= h / 2; ++a)
                    dp[w][h] = max(dp[w][h], dp[w][a] + dp[w][h - a]);
            }
        }
        return dp[m][n];
    }*/


