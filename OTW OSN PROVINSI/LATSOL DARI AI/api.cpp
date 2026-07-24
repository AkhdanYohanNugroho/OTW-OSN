#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;cin>>n>>m;
    vector<string>v(n);
    queue<pair<int,int>>q;
    vector<vector<pair<bool,int>>>visited(n,vector<pair<bool,int>>(m,{0,0}));
    int x[4] = {-1,1,0,0};
    int y[4] = {0,0,-1,1};
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    bool ft = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(v[i][j] == 'F'){
                q.push({i,j});
                visited[i][j] = {1,0};
            }
        }
    }
    int kebakar = 0;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        for(int i = 0;i<4;i++){
            int nr = p.first + x[i];
            int nc = p.second + y[i];
            if(nr >=0&&nr<=n-1&&nc>=0&&nc<=m-1){
                if(v[nr][nc] == '.'&&!visited[nr][nc].first){
                    q.push({nr,nc});
                    visited[nr][nc] = {1, (visited[p.first][p.second].second +1)};
                    kebakar = visited[nr][nc].second;
                }
            }
        }
    }
    cout << kebakar;
}