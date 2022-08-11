class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n= tri.size();
        vector<vector<int> >dp(n , vector<int>(tri[n-1].size(),INT_MAX));
        dp[0][0]=tri[0][0];
        for(int i=1;i<n;i++){
            int m=tri[i].size();
            for(int j=0; j< m;j++){
                if(j==0){
                     dp[i][j]= dp[i-1][j] +  tri[i][j];
                }
                else if(j==m-1){
                    dp[i][j]= dp[i-1][j-1] +  tri[i][j];
                }
                else
                dp[i][j]=min(dp[i-1][j], dp[i-1][j-1]) +  tri[i][j];
            }        
        }
        int cur=INT_MAX;
            for(int i=0;i<tri[n-1].size();i++){
               cur= min(dp[n-1][i],cur);
            }  
        return cur;
    }
};