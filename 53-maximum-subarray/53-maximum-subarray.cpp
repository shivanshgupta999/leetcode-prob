class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
      int i=0;
        int maxs=arr[0],maxn=arr[0];
        int cs=0;
        for(int i=0;i<n;i++){
            cs+=arr[i];
            if(cs<0)
                cs=0;
            maxs=max(cs,maxs);
            maxn=max(maxn,arr[i]);
        }
        if(maxs==0){
            return maxn;
        }
        return maxs;
    }
    
};

    
    
