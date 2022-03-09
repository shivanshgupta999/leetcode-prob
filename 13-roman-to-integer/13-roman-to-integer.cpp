class Solution {
public:
    unordered_map<char,int> mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int romanToInt(string s) {
        int n=s.size();
        int c=0;
        int i=0;
        while(i<n)
        if(mp[s[i]]>=mp[s[i+1]]){
            c+=mp[s[i]];
            i++;
        }
        else if(mp[s[i]]<mp[s[i+1]]){
            c+=  mp[s[i+1]] - mp[s[i]];
            i+=2;
            
        }
      return c;
    }
};