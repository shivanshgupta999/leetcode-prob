class Solution {
public:
    vector<int> findLonely(vector<int>& v) {
        int n= v.size();
       unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
         //   if(v[i]!=v[i+1] && v[i]!=v[i-1] && (v[i]+1)!=v[i+1] && (v[i]-1)!=v[i-1] )
          //      ans.push_back(v[i]);     
                
        }
        for(int i=0;i<n;i++){
           if(mp[v[i]]==1 && mp[v[i]+1]==0 && mp[v[i]-1]==0)
                ans.push_back(v[i]);
         //   if(v[i]!=v[i+1] && v[i]!=v[i-1] && (v[i]+1)!=v[i+1] && (v[i]-1)!=v[i-1] )
               
                
        }
       return ans;
    }
};