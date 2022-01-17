class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int j=0,i=0;
        unordered_map<char,int> mp;
        while(i<n &&j<n){
               
            if(mp.count(s[j])==0){
                mp[s[j]]=j;
                j++;
                 ans=max(ans,j-i);
            }
           
            else{
                mp.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};