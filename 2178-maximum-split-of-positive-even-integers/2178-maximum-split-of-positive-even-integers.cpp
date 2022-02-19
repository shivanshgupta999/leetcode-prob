class Solution {
public:
    
   /* vector<long long> maximumEvenSplit(long long fs, long long i){
        if(i>fs){
            vector<long long> ans;
            return ans;
        }
        if(i==fs){
            vector<long long> ans;
            ans.push_back(i);
            return ans;
        }
        
       vector<long long> a= maximumEvenSplit(fs-i,i+=2);
       vector<long long> b= maximumEvenSplit(fs,i+=2);
        if(a.size()>b.size()){
            a.push_back(i);
            return a;
        }
        return b;
    }*/
    vector<long long> maximumEvenSplit(long long f) {
       
         if(f%2!=0) return {};
        vector<long long> ans;
        long long j=2;
        while(f>0){
            if(f-j<=j){
                ans.push_back(f);
                return ans;
            }
            ans.push_back(j);
            f-=j;
            j+=2;
        }
        return ans;/* 
        if(fs%2!=0 || fs<5){
            vector<long long> ans;
            return ans;
        }
     /*   vector< vector<long long>> dp(fs);
        
            for(i=4;i<=n;i+=2){
                
            }
        return dp[fs];
        long long i=2;
        vector<long long> ans= maximumEvenSplit(fs,i);
        sort(ans.begin(),ans.end());
        return ans;*/
    }
};