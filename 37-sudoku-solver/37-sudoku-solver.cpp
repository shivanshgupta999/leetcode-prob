class Solution {
public:
    void solveSudoku(vector<vector<char>>& b) {
        solveSudoku(b,0,0);
    }
    bool solveSudoku(vector<vector<char>>& b,int row,int col){
        for(int i=0;i<9;i++){
         for(int j=0;j<9;j++){
             
          if(b[i][j]=='.'){
              for(char c='1';c<='9';c++){
                if(isvalid(b,i,j,c)){
                    b[i][j]=c;
                    if(solveSudoku(b,i,j)){
                        return true;
                    }
                    else{
                        b[i][j]='.';
                    }
                }     
            }
              
                  return false;
              
          }
            
      }
     }
        return true;
    }
 bool isvalid(vector<vector<char>>& b,int row,int col , char c){
     for(int i=0;i<9;i++){
        if(b[row][i]==c){
            return false;
        }
         if(b[i][col]==c){
            return false;
        }
         if(b[3*(row/3)+i/3][3*(col/3)+i%3]==c){
            return false;
        }
     }
     return true;
 }
};