class Solution {
public:
    bool check(string a, string b){
        int j=0;
        for(int i=0;i<=a.size()-b.size();i++){
           for (j = 0; j < b.size(); j++){
                if(a[i+j]!=b[j]){
                    break;
                }       
           }
               if(j==b.size())
            return true;
        }
        return false;
    }
    int repeatedStringMatch(string a, string b) {
        float n1=a.size();
        int n2=b.size();
      
        int cnt= 1;
       
        string t=a;
       while(t.size()<b.size()){
           t+=a;
           cnt++;
       }
     
       
           if(check(t,b))
               return cnt;
           
         if(check(t+a,b))
           return cnt+1;
       
         return -1;
        
    }
        
};