class Solution {
public:
    int threeSumMulti(vector<int>& arr, int t) {
        
 unordered_map<int,int> mp;
       int n=arr.size();
       int ans=0,mod=1e9+7;
        for(int i=0; i<n; i++) {
            ans = (ans + mp[t - arr[i]]) % mod;
            
            for(int j=0; j<i; j++)
                mp[arr[i] + arr[j]]++;
        }
     /*  for(int i=0;i<n;i++){
           mp[i]=nums[i];
       }
       for(int i=0;i<n-2;i++){
           for(int j=i+1;j<n-1;j++)
           if(mp.count(t-nums[i]-nums[j])&&  j<mp[t-nums[i]-nums[j]]){
              ans++;
           }
       }*/
       return ans;
   }
};