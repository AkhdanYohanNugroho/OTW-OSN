#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int x[4] = {-1,1,0,0};
    int y[4] = {0,0,-1,1};
    int n,m;cin>>n>>m;
    vector<vector<int>>grid(n, vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<m;j++){
    //         cout<<grid[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    queue<pair<int,int>>q;
    int a,b;cin>>a>>b;
    q.push({a-1,b-1});
    vector<vector<pair<bool,int>>>visited (n, vector<pair<bool,int>>(m, {0,0}));
    visited[a-1][b-1] = {1,1};
    vector<pair<int,int>>keluar;
    for(int i = 0;i<m;i++){
        if(grid[0][i] == 0){
            keluar.push_back({0,i});
        }
    }
    for(int i = 0;i<m;i++){
        if(grid[n-1][i] == 0){
            keluar.push_back({n-1,i});
        }
    }
    for(int i = 0;i<n;i++){
        if(grid[i][0] == 0){
            keluar.push_back({i,0});
        }
    }
    for(int i = 0;i<n;i++){
        if(grid[i][m-1] == 0){
            keluar.push_back({i,m-1});
        }
    }

    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        for(int i = 0;i<4;i++){
            int nr = p.first + x[i];
            int nc = p.second + y[i];
            if(nr>=0&&nr<=n-1&&nc>=0&&nc<=m-1){
                if(grid[nr][nc] == 0&&!visited[nr][nc].first){
                    q.push({nr,nc});
                    visited[nr][nc] = {1, visited[p.first][p.second].second + 1};
                }
            }
        }
    }
    
    int hasil = 1e8;
    for(auto x:keluar){
        if(visited[x.first][x.second].first){
            hasil = min(hasil, visited[x.first][x.second].second);
        }
    }
    cout << hasil;
}