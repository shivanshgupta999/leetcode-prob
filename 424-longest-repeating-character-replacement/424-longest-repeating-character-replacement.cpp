class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int> mp;
        int i=0,j=0,maxe=0,ans=0;
        mp[s[j]]++;
        while(j<n && i<n){
         
            maxe = max(maxe, mp[s[j]]);
            
            if(j-i+1-maxe<=k){
              ans = max(j-i+1 , ans);
                j++;
                   mp[s[j]]++;
                //cout<<ans;
            }
            else{
                mp[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};