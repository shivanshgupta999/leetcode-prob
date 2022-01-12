class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int m=v.size();
        int n=v[0].size();
        for(int i=0;i<m;i++){
            if(v[i][n-1]<t)
                continue;
            for(int j=0;j<n;j++){
            if(v[i][j]==t)
                return true;
        }
        }
        return false;
    }
};