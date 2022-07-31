class Solution {
public:
  /*  int x(int m, int n, vector<vector<int>>& dp){
         if(m==1 || n==1){
             return 1;
         }
        
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        
       int t1= x(m-1,n,dp);
        int t2= x(m,n-1,dp);
        return dp[m][n]= t1+t2;
        
    }*/
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        dp[0][0]=0;
        for(int i=1;i<m+1;i++){
           dp[i][1]=1;
        }
        for(int i=1;i<n+1;i++){
             dp[1][i]=1;
          
        }
        
        for(int i=2;i<=m;i++){
          for(int j=2;j<=n;j++){
                dp[i][j]= dp[i-1][j] + dp[i][j-1];
        }
        }
        
        
        return dp[m][n];

    }
};
/*

         if(m==1 || n==1){
             return 1;
         }
        int **ans = new int*[m];
	for(int i = 0; i < m; i++) {
		ans[i] = new int[n];
	}
       for(int j = n - 2; j >= 0; j--) {
		ans[m-1][j] = input[m-1][j] + ans[m-1][j+1];
	}

	// Last col
	for(int i = m-2; i >= 0; i--) {
		ans[i][n-1] = input[i][n-1] + ans[i+1][n-1];
	}

	for(int i =0; i <m; i++) {
		for(int j = 0; j <n; j++) {
			ans[i][j] = input[i][j] + min(ans[i][j+1], min(ans[i+1][j+1], ans[i+1][j])) ;
		}
	}
        
        
        return ans[m-1][n-1];
        */