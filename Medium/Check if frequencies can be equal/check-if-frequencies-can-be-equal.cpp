//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char,int>m;
	    for(int i=0;i<s.size();i++){
	        m[s[i]]++;
	    }
	    vector<int>ans;
	    for(auto i:m){
	        ans.push_back(i.second);
	    }
	    sort(ans.begin(),ans.end());
	   
	    reverse(ans.begin(),ans.end());
	   //  cout<<ans[0];
	   //for(auto i:ans){
	   //    cout<<i<<" ";
	   //}
	   //cout<<endl;
	   bool t=false;
	    for(int i=0;i<ans.size()-1;i++){
	        if(ans[i]==ans[i+1]+1){
	            if(!t){
	                  t=true;
	            ans[i]=ans[i]-1;
	            }
	           // continue;
	          
	            
	        }
	       // else{
	       //     return 0;
	       // }
	        if(ans[i]==ans[i+1]){
	            continue;
	        }
	       
	        
	    }
	    if(!t){
	        if(ans[ans.size()-2]==ans[ans.size()-1]+1){
	            ans[ans.size()-2]=ans[ans.size()-2]-1;
	        }
	    }
	    for(int i=0;i<ans.size()-1;i++)
	    {
	        if(ans[i]!=ans[i+1]){
	            return 0;
	        }
	    }
	    return 1;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends