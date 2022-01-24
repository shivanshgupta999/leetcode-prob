class Solution {
public:
    int majorityElement(vector<int>& v) {
           int n=v.size();
        int mj1=v[0];
        int c1=0;
        for(int i=0;i<n;i++){
            if(v[i]==mj1){
                c1++;
            }
           
            else if(c1==0){
                mj1=v[i];
                c1++;                
            }
            else{
                c1--;
            }
           
        }
        return mj1;
    }
};