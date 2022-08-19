class Solution {
public:
    int change(int am, vector<int>& co) {
        int n= co.size();
        vector<vector<int>> dp(n+1 , vector<int> (am+1,0));
         for(int i=0;i<=n;i++){
             dp[i][0]=1;
         }
        for(int i=1;i<=n;i++){
             for(int j=1;j<=am;j++){
                 int nottake = dp[i-1][j];
                 int take=0;
                 if(j>=co[i-1]) 
                     take = dp[i][j-co[i-1]] ;
                 dp[i][j] = take + nottake;
             }
        }
        return dp[n][am];
    }
};