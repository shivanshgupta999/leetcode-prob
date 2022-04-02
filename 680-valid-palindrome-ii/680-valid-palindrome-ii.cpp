class Solution {
public:
    bool validPalindrome(string s) {
         int n=s.size();
        int i=0,j=n-1;
       bool check = false;
        int cnt=0;
       while(i<j){
           if(s[i]!=s[j]){
              int a=i,b=j-1;
                while (a < b && s[a]==s[b] ) {
                    
                    a++;
                    b--;
                }
               
             int  c=i+1;
               int d=j;
                while (c < d && s[c] == s[d]) {
                   c++;
                    d--;
                }
                return a >= b || c >= d;
           }
           i++;
           j--;
           
       }
        return true;
    }
};

              