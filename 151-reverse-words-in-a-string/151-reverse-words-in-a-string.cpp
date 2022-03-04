class Solution {
public:
  /*  string reverse(string s){
        int i=0, j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }*/
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        string ans="";
       
        while(i<n){
            
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n)break;
            int j=i+1;
            while(j<n && s[j]!=' '){
                j++;
            }
           ans=' '+ s.substr(i,j-i) + ans;
           i=j+1;
            
        }
        
      /*  reverse(s,0,n);
        
        for(int i=0;i<n;i++){
            if(  (s[i]==' '&& s[i-1]==' ')){
                continue;
            }
            ans+= s[i];
            
        }*/
          return ans.substr(1);
       /* i=0;
        int j=n-1;
        while(i<=j){
             swap(s[i],s[j]);
            i++;
            j--;
        }*/
    }
};