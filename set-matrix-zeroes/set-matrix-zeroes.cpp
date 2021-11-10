class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        set<int> row;
        set<int> col;
        int m=mat.size();
        int n=mat[0].size();
        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(mat[i][j]==0){
               row.insert(i);
               col.insert(j);
           }
        }
        }
          set<int> :: iterator it;
            for(it=row.begin();it!=row.end();it++){
                 for (int j = 0; j < n; j++)
                  mat[*it][j]=0;
            }
             for(it=col.begin();it!=col.end();it++){
                 for (int i = 0; i < m; i++)
                  mat[i][*it]=0;
            }
            
       //KAM BOLO
    
    }
};
