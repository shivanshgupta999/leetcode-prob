class Solution {
public:
    vector<vector<int>> ans;
    void combinationSum(vector<int>& v, int t,int i, vector<int> &temp){
        
         if(t==0){
           ans.push_back(temp) ;
             return;
             
        }
        if(i==v.size()){
            return;
        }
         if(t-v[i]>=0){
           temp.push_back(v[i]);
       combinationSum(v,t-v[i],i,temp);
             temp.pop_back();
         }
        combinationSum(v,t,i+1,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        vector<int> temp;
       combinationSum(v,t,0,temp);
        return ans;
    }
};