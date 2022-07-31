class Solution {
public:
    int x(vector<int>& nums,int n,vector<int> &dp){
        if(n==0) return 0;
        if(n==1) return nums[0]; 
        
        if(dp[n]!=-1){
            return dp[n];
        }
    int t1= nums[n-1] + x(nums,n-2,dp) ;
       
        
        int t2= x(nums,n-1,dp);
        
        return dp[n]= max(t1,t2);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return x(nums,n,dp);
    }
};