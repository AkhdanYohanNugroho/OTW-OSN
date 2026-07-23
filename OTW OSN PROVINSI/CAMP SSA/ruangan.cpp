#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;cin>>n>>m;
    vector<string>grid(n);
    vector<vector<bool>>visited(n, vector<bool>(m,false));
    queue<pair<int,int>>q;
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    for(int i=0;i<n;i++){
        cin >> grid[i];
    }

    int ruang = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            if(grid[i][j] == '.'&& !visited[i][j]){
                ruang++;
                visited[i][j] = true;
                q.push({i,j});
                while(!q.empty()){
                    pair<int,int>depan = q.front();
                    q.pop();
                    int r = depan.first;
                    int c = depan.second;

                    for(int k = 0;k<4;k++){
                        int nr = r+dx[k];
                        int nc = c+dy[k];

                        if(nr>=0&&nr<=n-1&&nc<=m-1&&nc>=0){
                            if(grid[nr][nc] == '.' && !visited[nr][nc]){
                                visited[nr][nc] = 1;
                                q.push({nr,nc});
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ruang;
}