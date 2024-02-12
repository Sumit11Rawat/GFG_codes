//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        long long fans=0;
        int b=1;
        long long ans;
        for(int i=0;i<n;i++){
             int a=i;
             ans=1;
            while(a>=0){
              ans=(ans*b)%1000000007;
              a--;
              b++;
            }
            fans+=ans%1000000007;
        }
        return fans%1000000007;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends