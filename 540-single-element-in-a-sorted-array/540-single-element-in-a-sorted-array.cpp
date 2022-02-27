class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n=v.size();
        if(n==1)
            return v[0];
        int s=0,e=n-1;
        while(s<e){
            int mid=(s+e)/2;      
            
   if(mid%2==0)
            if(v[mid]==v[mid-1]){
                e=mid-2;
            }
            else if(v[mid]==v[mid+1]){
                s=mid+2;
            }
            else{
                return v[mid];
            }
    else
           if(v[mid]==v[mid-1]){
                
                s=mid+1;
            }
            else if(v[mid]==v[mid+1]){
               e=mid-1;
            }
                        
        
        }
        return v[s];
    }
};