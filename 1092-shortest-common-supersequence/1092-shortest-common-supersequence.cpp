class Solution {
public:
    string lcs(string s, string t, int n, int m)
    {
        
        vector<vector<int>> dp(n+1 , vector<int>(m+1,0));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
             dp[i][j]=  1+ dp[i-1][j-1];
             
        }
       else
       dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
           
        }
        }
        
     /*   for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        
        string x="";
        int i=n,j=m;
        while(i>0 && j>0){
                if(s[i-1]==t[j-1]){
                    x +=(s[i-1]);
                    i--;
                    j--;
                }
            
                else if(dp[i-1][j]>dp[i][j-1]){
                    x+=(s[i-1]);
                   i--;
                    
                }
            else{
                 x+=(t[j-1]);
               
                j--;
            }
            
        }
  while(i>0){
      x += s[i-1];
      i--;
  }
  while(j>0){
      x += t[j-1];
      j--;
  }
        reverse(x.begin(),x.end());
        return x;
    }
    
    string shortestCommonSupersequence(string str1, string str2) {
        int n1=str1.size(),n2=str2.size();
        
   return lcs(str1,str2,n1,n2); 
    
    }
};