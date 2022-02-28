// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
       
        int cnt=0;
        for(int i=0;i<n;i++){
            
            if(arr[i]<=k){
                cnt++;
            }
           
        }
        
        int b=0;
        for(int i=0;i<cnt;i++){
             if(arr[i]>k){
                b++;
            }
        }
        int i=0,j=cnt-1;
         int mic=b;
        while(j<n){
             mic= min(mic,b);
             if(arr[i]>k){
                b--;
            }
             i++;
             j++;
             if(j<n &&arr[j]>k){
                b++;
            }
            
           
           
            
        }
        return mic;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends