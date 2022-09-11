class Solution {
public:
     int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
         vector<int> temp(n+1,0);
         
        for(int i=1;i<=n;i++){
            vector<int> curr(n+1,0);
            for(int j=1;j<=n;j++){
                
                if(s[i-1]==t[j-1])
              curr[j] = 1+ temp[j-1];
                else
                  curr[j]=max(curr[j-1],temp[j]);  
            }
            temp=curr;
        }
        return temp[n];
    }
    int minInsertions(string s) {
      int x=  longestPalindromeSubseq( s);
        return s.size()-x;
    }
};