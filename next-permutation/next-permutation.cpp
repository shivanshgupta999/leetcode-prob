class Solution {
public:
    void nextPermutation(vector<int>& arr) {
          if (arr.size()<2)
            return ;
       
        int n=arr.size();
      
        
        int x;
        for( x=n-2;x>=0;x--){
            if(arr[x]<arr[x+1]){
                
                break;
            }
        }
        if(x<0){
            
       
            int i=0,j=n-1;
             while(i<j){
                 swap(arr[i],arr[j]);
                 i++;
                 j--;
             }
            
            return  ;
        } 
        
        for(int i=n-1;i>x;i--){
            if(arr[i]>arr[x]){
                swap(arr[i],arr[x]);
                break;
            }
        }
       reverse(arr.begin()+x+1,arr.end());
         return;
    }
};