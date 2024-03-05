//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        int i=0;
        int j=n-1;
        int chk=0;
        while(i<n){
            if(a[i]<=a[j]){
                chk=max(chk,j-i);
                i++;
                j=n-1;
                
            }
            else if(a[i]>a[j]){
                j--;
            }
            if(i==j){
                i++;
                j=n-1;
                // chk=max(chk,j-i);
            }
            
        }
        return chk;
        
    }
}; 
// 34 8 2 9 23 80 30 33 6 3

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends