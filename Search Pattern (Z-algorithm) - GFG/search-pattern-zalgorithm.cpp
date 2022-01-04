// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
            int n=txt.size();
            vector <int> v;
            for(int  i=0;i<n;i++){
                int ans=i;
                if(pat[0]==txt[i]){
                    i++;
                    int j=1;
                    for(j;j<pat.size();j++){
                        if(pat[j]!=txt[i]){
                            break;
                        }
                        i++;
                    }
                    if(j==pat.size()){
                        v.push_back(ans+1);
                    }
                    
                }
                i=ans;
            }
            return v;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends