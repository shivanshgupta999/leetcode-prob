class Solution {
public:
    bool x(vector<int>& nums , int n , int k ,  vector<vector<int>>& dp) {
        if(k==0){
            return true;
        }
        if(n==0){
            return false;
        }
        if(dp[n][k]!=-1){
            return dp[n][k];
        }
        bool taken = false;
        if(nums[n-1]<=k)
         taken = x(nums , n-1 , k-nums[n-1] ,dp);
        bool nottaken = x(nums, n-1 , k , dp);
        return dp[n][k]= taken || nottaken ;
    } 
    
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
          int k=0;
    
    for(int i=0; i<n;i++){
        k+= nums[i];
    }
        if(k%2!=0){
            return false;
        }
        k=k/2;
         vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return x(nums,n , k ,dp);
    }
};