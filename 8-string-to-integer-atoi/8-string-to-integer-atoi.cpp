class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        int sign=1;
        int mod=INT_MAX;
        
        while(s[i]==' '){
            i++;
        }
    
        if(s[i]=='-' || s[i]=='+'){
            sign= s[i]=='-'?-1:1;
            i++;
        }
        
       
        int ans=0;
        for(i;i<n;i++){
            if(s[i]>'9' || s[i]<'0')
                break;
        
            if(ans>mod/10 || (ans==mod/10 && s[i]>'7')){
                return sign==1 ? INT_MAX:INT_MIN;
            }
          
            ans= ans*10 + (s[i]-48 );
        }
        return ans*sign;
    }
};/*
int atoi(const char *str) {
    int sign = 1, base = 0, i = 0;
    while (str[i] == ' ') { i++; }
    if (str[i] == '-' || str[i] == '+') {
        sign = 1 - 2 * (str[i++] == '-'); 
    }
    while (str[i] >= '0' && str[i] <= '9') {
        if (base >  INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)) {
            if (sign == 1) return INT_MAX;
            else return INT_MIN;
        }
        base  = 10 * base + (str[i++] - '0');
    }
    return base * sign;
}*/