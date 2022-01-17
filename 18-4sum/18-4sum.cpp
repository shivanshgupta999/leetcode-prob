class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int tar) {
        vector<vector<int>> ans;
        if(v.empty())
            return ans;
        int n=v.size();
        if(n<4)
            return ans;
        int lef,rig;
        sort(v.begin(),v.end());
        for(int i=0;i<n;){
         int t2= tar-v[i];
            for(int j=i+1;j<n;){
               int t=t2-v[j];
                lef=j+1;
                rig=n-1;
                while(lef<rig){
                if(v[lef]+v[rig]<t){
                    int x=v[lef];
                    while(lef<rig && v[lef]==x)
                    lef++;
                }
                else if(v[lef]+v[rig]==t){
                    vector<int> temp{v[i],v[j],v[lef],v[rig]};
                    ans.push_back(temp);
                     int x=v[lef];
                    while(lef<rig && v[lef]==x)
                    lef++;
                      x=v[rig];
                    while(lef<rig && v[rig]==x)
                    rig--;
                }
                  else{
                        int x=v[rig];
                    while(lef<rig && v[rig]==x)
                    rig--;
                  }  
                }
                  int x=v[j];
                    while(j<n && v[j]==x)
                    j++;
            }
            int x=v[i];
                    while( i<n &&v[i]==x )
                    i++;
        }
        return ans;
    }
};