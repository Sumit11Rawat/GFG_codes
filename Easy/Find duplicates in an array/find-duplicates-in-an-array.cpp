//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector<int> ans;
        set<int>s;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                
                s.insert(arr[i]);
                
            }
            
        }
        for(auto it:s){
            ans.push_back(it);
        }
        if(ans.size()==0){
            return {-1};
        }
        else{
        return ans;}
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends