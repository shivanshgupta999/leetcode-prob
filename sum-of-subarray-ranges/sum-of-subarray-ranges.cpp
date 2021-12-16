class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long int sum=0;
        for(int i=0;i<n;i++){
            int mn=nums[i];
            int mx=nums[i];
            for(int j=i+1;j<n;j++){
                mx= max(mx,nums[j]);
                mn=min(mn,nums[j]);
            sum+=mx-mn;
        }     
        }
        return sum;
    }
};
// -3 -2  1 4 4
