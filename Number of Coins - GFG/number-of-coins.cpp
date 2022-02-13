// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int arr[], int n, int v) 
	{ 
	    // Your code goes here
	  vector<vector<int>> dp(n+1,vector<int>(v+1));
	  
	   for(int j=0;j<v+1;j++){
        dp[0][j]=INT_MAX-1;
    }
     for(int j=0;j<n+1;j++){
        dp[j][0]=0;
    }
    // i is length and j is value
	  for(int i=1;i<n+1;i++){
          for(int j=1;j<v+1;j++){
              if(j-arr[i-1]>=0 )
              dp[i][j]=min(dp[i-1][j],dp[i][j-arr[i-1]]+1);
              else
               dp[i][j]= dp[i-1][j];
          }
	  }
	   if(dp[n][v]==INT_MAX-1)   //add this condition
            return -1;
	  return dp[n][v];
	  
	  /*  if(n<0)
	    return -1;
	    
	    if(n==1){
	       return (v%arr[0]==0) ? v/arr[0]:-1;
	    }
	    int x=-1;
	    if(v-arr[0]>=0){
	        x=minCoins(arr,n,v-arr[0]);
	        if(x!=-1)
	   x= x+1;
	  
	    }
	   int y= minCoins(arr+1,n-1,v);
	   if(x!=-1 && y!=-1)
	   return min(x,y);
	   else if(x!=-1)
	   return x;
	   return y;*/
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends