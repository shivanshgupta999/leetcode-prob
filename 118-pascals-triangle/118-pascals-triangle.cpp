class Solution {
public:
    vector<vector<int>> generate(int rows) {
         vector<vector<int>> ans(rows);
        ans[0].push_back(1);
        for(int i=1;i<rows;i++){
            ans[i]= vector<int> (i+1);
            for(int j=0;j<i+1;j++){
                if(j==0|| j==i){
                    ans[i][j]=1;
                    continue;
                }
                ans[i][j]= ans[i-1][j]+ans[i-1][j-1];
            }
           
       
        }
        return ans;
    }
};