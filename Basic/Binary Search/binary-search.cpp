//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  int search(int arr[],int l,int r,int k,int n){
      if(r>=l){
      int mid=l+(r-l)/2;
      if(arr[mid]==k){
          return mid;
      }
      if(arr[mid]>k){
         return  search(arr,l,mid-1,k,n);
          
      }
      else{
        return  search(arr,mid+1,r,k,n);
      }
      }
      return -1;
  }
    int binarysearch(int arr[], int n, int k) {
        // code here
        
        int ans=search(arr,0,n-1,k,n);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends