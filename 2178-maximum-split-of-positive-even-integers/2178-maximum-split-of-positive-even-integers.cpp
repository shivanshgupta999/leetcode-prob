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
        long long i=2,sum=0;
        while(sum+i<=f){
            
            ans.push_back(i);
            sum+=i;
            if(sum==f){
                return ans;
            }
            i+=2;
            
        }
       long long b= ans.back();
        ans.pop_back();
        ans.push_back(f-sum+b);
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