#include<vector> // for 2D vector
#include<algorithm> // for sort()
 bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] < v2[0];
}
class Solution {
public:
 
   
    vector<vector<int>> merge(vector<vector<int>>& v) {
        int n=v.size();
        vector<vector<int>> ans;
            sort(v.begin(), v.end(),sortcol);
        vector<int> t{v[0][0],v[0][1]};
                   ans.push_back(t);
    
        int cnt=0;
        for(int i=1;i<n;i++){
           
                if(ans[cnt][1]>=v[i][0]){
                    
                    ans[cnt][1]=max(v[i][1],ans[cnt][1]);
                }
                else{
                    vector<int> t{v[i][0],v[i][1]};
                   ans.push_back(t);
                    cnt++;
                }
            
        }
        return ans;
    }
};