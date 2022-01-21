class Solution {
public:
    double myPow(double x, int p) {
        long long n=abs(p);
        double ans=1;
        while(n>0)
        if(n%2==0){
            n=n/2;
            x=x*x;
        }
        else{
            ans=ans*x;
            n-=1;
        }
        if(p>0)
        return ans;
        else
            return 1/ans;
    }
};