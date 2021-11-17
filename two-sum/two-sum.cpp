class Solution {
public:
   vector < int> twoSum(vector< int>& nums, int t) {
unordered_map<int,int> mp;
       int n=nums.size();
        vector < int> ans(2);
       
       for(int i=0;i<n;i++){
           mp[nums[i]]=i;
       }
       for(int i=0;i<n;i++){
           if(mp.count(t-nums[i])&& i!=mp[t-nums[i]]){
               ans[0]=i;
               ans[1]=mp[t-nums[i]];
               break;
           }
       }
       return ans;
		 }
};	