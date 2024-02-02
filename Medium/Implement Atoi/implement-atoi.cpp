//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int chk=0;
        if(s[0]=='-'){
            chk++;
        }
        if(s[0]>='a'&&s[0]<='z'){
            return -1;
        }
        if(s[0]>='A'&&s[0]<='Z'){
            return -1;
        }
        int chk2=-1;
        for(int i=1;i<s.size();i++){
         if(s[i]=='-'){
             chk2++;
         }
         if(s[i]>='0'&&s[i]<='9'){
             continue;
         }
         else{
             return -1;
         }
    }
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            ans+=s[i];
        }
    }
    int size=ans.size()-1;
    int fans=0;
    int i=0;
    for(int i=0;i<ans.size();i++){
        fans=fans+(ans[i]-'0')*pow(10,size);
        size--;
    }
     if(chk==1&&chk2==-1){
         fans=-fans;
     }
     return fans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends