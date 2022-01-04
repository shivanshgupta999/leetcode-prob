class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int b=prices[0];
       int n= prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]-b<0){
                b=prices[i];
            }
            else{
                maxp=max(maxp,prices[i]-b);
            }
        }
        return maxp;
    }
};