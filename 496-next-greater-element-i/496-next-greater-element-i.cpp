class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         int n = nums2.size();
         unordered_map < int,int > v;  
         stack < int > st;
        st.push(nums2[n-1]);
        v[nums2[n-1]]=-1;
          for(int i=n-2;i>=0;i--){
              v[nums2[i]]=-1;
              while(!st.empty()){
                  if(st.top()>nums2[i]){
                      break;
                  }
                  st.pop();
              }
               if(!st.empty()){
                   v[nums2[i]]=st.top();
               }
              st.push(nums2[i]);
              
          }
        vector<int > ans(nums1.size(),-1);
        for(int  i=0;i<nums1.size();i++){
            ans[i]=v[nums1[i]];
        }
        return ans;
    }
};