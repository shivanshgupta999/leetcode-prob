class Solution {
public:
    bool matchReplacement(string s, string sub, vector<vector<char>>& map) {
        int n= s.size(),m=sub.size(),t=map.size();
        unordered_map<char,unordered_set<char>> mp;
         for(int i=0;i<t;i++){
            mp[map[i][0]].insert(map[i][1]);
        }
        for(int i=0;i<=n-m;i++){
            int j;
            for( j=0;j<m&&i+j<n;j++){
                if(s[i+j]==sub[j] ){
                   continue;
                    
                }
                else if( mp.count(sub[j])==1 &&    mp[sub[j]].find(s[i+j])!=mp[sub[j]].end()){
                  
                    continue;
                }
                else{
                    break;
                }
            }
            if(j==m){
                return true;
            }
        }
        return false;
    }
};