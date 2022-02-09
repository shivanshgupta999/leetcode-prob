// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool cmp(pair<int, int> s,pair<int, int> e){
         if(s.second==e.second) return s.first<e.first;
        return s.second<e.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        pair<int, int> p;
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++){
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end(),cmp);
        int cnt=1;
        int endm=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>endm){
                endm=v[i].second;
                cnt++;
            }
           
        }
         return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends