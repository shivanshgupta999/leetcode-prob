class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int l=n-1;
      int i=0;
       while(s<l && i<=l){
            if(nums[i]==0){
                 swap(nums[s],nums[i]);
                s++;
                i++;
            }
           else if(nums[i]==2){
                 swap(nums[i],nums[l]);
                l--;
            }
           else{
               i++;
           }
        }
    }
};