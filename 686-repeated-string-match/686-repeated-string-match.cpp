class Solution {
public:
/*    bool check(string a, string &b){
        int j=0;
        for(int i=0;i<a.size();i++){
           
                if(a[i]==b[j]){
                    j++;
                }
             else{
                 if(j>0)
                     i-=j;
                 j=0;
             }
        if(j==b.size()){
            return true;
        }
         }
        return false;
    }*/
    int repeatedStringMatch(string A, string B) {
        int m = A.length();
    int n = B.length();
 
    int count;
    bool found = false;
 
    for (int i = 0; i < m; i++) {
        int j = i;
        int k = 0;
        count = 1;
 
        while (k < n && A[j] == B[k]) {
            if (k == n - 1) {
                found = true;
                break;
            }
            j = (j + 1) % m;
 
            if (j == 0)
                count++;
 
            k++;
        }
        if (found)
            return count;
    }
    return -1;
        
    }
        
};