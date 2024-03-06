//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    void bfs(vector<vector<char>>&grid,vector<vector<int>>&vis,int i,int j){
         vis[i][j]=1;
         int n=grid.size();
         int m=grid[0].size();
         queue<pair<int,int>>q;
         q.push({i,j});
         while(!q.empty()){
             int r=q.front().first;
             int c=q.front().second;
             q.pop();
            //  now traverse to the eight direction of cell by bleow loops
            for(int k=-1;k<=1;k++){
                for(int l=-1;l<=1;l++){
                    if(r+k>=0&&r+k<n&&c+l>=0&&c+l<m&&grid[r+k][c+l]=='1'&&!vis[r+k][c+l]){
                       vis[r+k][c+l]=1;
                       q.push({r+k,c+l});
                    }
                   
                }
            }
         }
        
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(!vis[i][j]&&grid[i][j]=='1'){
                   count++;
                   bfs(grid,vis,i,j);
               }
           }
       }
       return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends