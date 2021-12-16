class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        vector<set<char>> v(10);
      int cnt=0;
        for(int i=0;i<n;i+=2){
            int x=rings[i];
            v[ rings[i+1]-'0'].insert(x);
        }
        for(int i=0;i<10;i++){
           if(v[i].size() == 3) 
               cnt++;
        }
        
        return cnt;
    }
};

