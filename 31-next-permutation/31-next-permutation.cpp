class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-1;
            while(i>=1&&nums[i-1]>=nums[i] ){
                i--;
            }
        if(i==0){
            sort(nums.begin(),nums.end());
            return;
        }
        int j=n-1;
        while(j>=i){
         if(nums[j]>nums[i-1]){
             swap(nums[j],nums[i-1]);
             sort(nums.begin()+i,nums.end());
             return;
         }
        j--;
        }
    }
};