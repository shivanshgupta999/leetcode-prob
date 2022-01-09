class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int n= v.size();
      
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            swap(v[j][i],v[i][j]);

     for (int i = 0; i < n; i++)
        for (int j = 0; j < n/2; j++)
            swap(v[i][j],v[i][n-1-j]);
    }
};