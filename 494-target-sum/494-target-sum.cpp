class Solution {
public:
   int  x(vector<int>& nums, int n, int k, vector<vector<int>>& dp){
        if(n==1){
            
            if(k==0 && nums[0]==0)
                return 2;
            if(k==0 || k == nums[0])
            
                return 1;
            
            return 0;
        }
        
       
       if(dp[n][k]!=-1){
           return dp[n][k];
       }
        int nottake= x(nums, n-1 , k,dp);
        int take=0;
        if(nums[n-1]<=k){
            take =  x(nums, n-1 , k-nums[n-1],dp);
        }
        return dp[n][k] = take + nottake ;
    }
    
    int findTargetSumWays(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
           sum += nums[i];
        }
         if(sum-k<0) return 0;
    if((sum-k)%2==1) return 0;
        int s2 = (sum -k)/2;
        vector<vector<int>> dp(n+1,vector<int> (s2+1,-1));
        return x(nums,n,s2,dp);
    }
};