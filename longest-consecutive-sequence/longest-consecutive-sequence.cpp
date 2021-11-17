class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        unordered_map<int,bool> mp;
        int n=v.size();
        for(int i=0;i<n;i++){
            mp[v[i]]=false;
        }
        
        int ans=0;
         for(int i=0;i<n;i++){
             if(mp[v[i]]==true)
                 continue;
             int x=v[i];
             int cnt=0;
            while(mp.count(x) && mp[x]==false){
                cnt++;
                mp[x]=true;
                x++;                
            }
             x=v[i]-1;
              while(mp.count(x) && mp[x]==false){
                cnt++;
                mp[x]=true;
                x--;                
            }
            ans = max(ans,cnt); 
        }
        return ans;
    }
};