class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
        if(strs.size()==1)
            return strs[0];
        int n=strs.size();
        string s1=strs[0] , s2=strs[n-1];
        int i=0,j=0;
        while(i<strs[0].size()&& i<strs[n-1].size()){
            if(s1[i]!=s2[i]){
                break;
            }
            i++;
        }
       
        return s1.substr(0,i);
    }
};