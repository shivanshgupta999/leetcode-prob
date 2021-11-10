class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
      int i=0;
        int maxs=arr[0],maxn=arr[0];
        int cs=0;
        bool t=true;
        for(int i=0;i<n;i++){
            cs+= arr[i];
           if(cs<0){
               cs=0;
           }
            maxs=max(maxs,cs);
            maxn=max(maxn,arr[i]);
            if(arr[i]>0)
                t=false;
        }
        if(t==false)
        return maxs;
        return maxn;
    }
    
};

    
    
