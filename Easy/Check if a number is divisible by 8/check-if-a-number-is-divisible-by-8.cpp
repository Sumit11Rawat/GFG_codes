//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        if(s.size()<3){
            int ans=0;
            for(int i=0;i<s.size();i++){
                ans=ans*10+s[i]-'0';
            }
            if(ans%8==0){
                return 1;
            }
        }
        else{
            int i=s.size()-1;
            int ans=0;
            string b="";
            for(int j=i-2;j<s.size();j++){
                ans=ans*10+s[j]-'0';
                b+=s[j];
            }
            if(ans%8==0||b=="000"){
                return 1;
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends