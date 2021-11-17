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
/*int i = 0, j = 0, n = s.size(), ans = 0;
    
		while( i<n && j<n)
		{
			if(set.find(s[j]) == set.end()) //If the character does not in the set
			{
				set.insert(s[j++]); //Insert the character in set and update the j counter
				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
			}
			else
			{
				set.erase(s[i++]); 
				/*If character does exist in the set, ie. it is a repeated character, 
				we update the left side counter i, and continue with the checking for substring. 
			}
		}
    
		return ans; */