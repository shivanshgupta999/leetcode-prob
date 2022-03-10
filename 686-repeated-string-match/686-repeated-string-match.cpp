class Solution {
public:
    bool check(string a, string& b){
        int j=0,n1=a.size(),n2=b.size();
        for(int i=0;i<=n1-n2;i++){
           for (j = 0; j < b.size(); j++){
                if(a[i+j]!=b[j]){
                    break;
                }       
           }
               if(j==n2)
            return true;
        }
        return false;
    }
    int repeatedStringMatch(string a, string b) {
        float n1=a.size();
        int n2=b.size();
      
        int cnt= ceil(n2/n1);
       
        string t=a;
        for(int i=1;i<cnt;i++){
            t+=a;
        }
     
       
           if(check(t,b))
               return cnt;
           
         if(check(t+a,b))
           return cnt+1;
       
         return -1;
        
    }
        
};