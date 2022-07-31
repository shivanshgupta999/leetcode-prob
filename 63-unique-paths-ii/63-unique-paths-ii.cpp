class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& op) {
        
        int m=op.size();
        int n=op[0].size();
   //      vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        vector<int> prev(n+1,0);
    //    dp[0][0]=0;
/*        for(int i=1;i<m+1;i++){
            if(op[i-1][0]==0)
           dp[i][1]=1;
          else
              break;
        }*/
    
        for(int i=1;i<n+1;i++){
             if(op[0][i-1]==0)
             prev[i]=1;
            else
                break;
           
        }
        
        for(int i=2;i<=m;i++){
            vector<int> cur(n+1,0);
          for(int j=1;j<=n;j++){
                 if(op[i-1][j-1]==0)
               cur[j]= prev[j] + cur[j-1];
             else
                  cur[j]=0;
        }
            prev=cur;
        }
        
        
        return prev[n];
    }
};