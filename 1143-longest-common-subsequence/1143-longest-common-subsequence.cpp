class Solution {
public:
  /*  int fn(string s, string t, int n, int m , vector<vector<int>>& dp)
    {
        // your code here
        if(n==0 || m==0)
        return 0;
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        
        if(s[0]==t[0]){
            return dp[n][m]=  1+ fn(s.substr(1),t.substr(1),n-1,m-1,dp);
        }
        else{
            int a = fn( s.substr(1), t , n-1, m,dp);
            int b= fn(s,t.substr(1),n,m-1,dp);
            return dp[n][m]= max(a,b);
        }
    }*/
    int longestCommonSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>> dp(n+1 , vector<int>(m+1,0));
       // return fn(s,t,n,m,dp);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
             dp[i][j]=  1+ dp[i-1][j-1];
        }
        else{
          dp[i][j]=  max(dp[i-1][j],dp[i][j-1]); 
        }
           
        }
        }
        return dp[n][m];
    }
};