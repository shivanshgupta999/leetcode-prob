// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int> ans;
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        if(n==1){
            ans.push_back(0);
             ans.push_back(arr[0]);
             return ans;
        }
        subsetSums(arr,n-1);
       int x=ans.size();
        for(int i=0;i<x;i++){
            ans.push_back(arr[n-1]+ans[i]);
        }
         
         return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends