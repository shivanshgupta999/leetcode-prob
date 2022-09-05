class Solution {
public:
    int maximumRobots(vector<int>& ct, vector<int>& rc, long long bu) {
        int n= ct.size();
        multiset<int> st;
        long long cs=0,x=0, cmax=0,cmax2=0;
        long long cnt=0,ans=0;
       int i=0,j=0;
            while(i<n && j<n){
             st.insert(ct[j]);                
            cs += rc[j];
            cnt++;
            if(*rbegin(st) + cnt*cs <= bu){
                ans = max(cnt,ans);
                j++;
            }
            else{
                cs-= rc[i];
               st.erase(st.find(ct[i]));
                cnt--;
                i++; 
                j++;
            }
            
        }
        return ans;
    }
};
