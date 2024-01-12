//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void chk(string s,string tempans,int i,vector<string>&ans){
	     if(i==s.size()){
	         ans.push_back(tempans);
	         return ;
	     }
	   //  take
	        chk(s,tempans+s[i],i+1,ans);
	       // do not take;
	       chk(s,tempans,i+1,ans);
	       return;
	}
		vector<string> AllPossibleStrings(string s){

            vector<string>ans;
            string tempans="";
            chk(s,tempans,0,ans);
            sort(ans.begin(),ans.end());
            ans.erase(ans.begin());
            return ans;
            
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends