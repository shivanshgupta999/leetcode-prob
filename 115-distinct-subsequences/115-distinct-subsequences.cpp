class Solution {
public:
  int rec(string s1, string s2 , int n1,int n2,  vector<vector<int>> &dp){
      if(n2<=0)
        return 1;
         if(n1<=0)
        return 0;
    if(n2>n1)
        return 0;
    if(dp[n1][n2]!=-1)
        return dp[n1][n2];
      
        if(s1[n1-1]==s2[n2-1]){
            int temp1 = rec(s1,s2,n1-1,n2-1,dp);
           
            int temp2 = rec(s1,s2,n1-1,n2,dp);
            return dp[n1][n2]=temp1+temp2;
            
        }

        else{
          return dp[n1][n2]=rec(s1,s2,n1-1,n2,dp);
        }
        
    }
    int numDistinct(string s, string t) {
        int n1=s.size();
        int n2= t.size();
        
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
      return  rec(s,t,n1,n2,dp);
    }
};