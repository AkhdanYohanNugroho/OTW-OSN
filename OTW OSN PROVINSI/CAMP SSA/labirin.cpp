#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;cin>>n>>m;
    vector<string>grid(n);
    vector<vector<bool>>visited(n, vector<bool>(m,false));
    queue<pair<int,int>>q;
    pair<int ,int>b;
    pair<int ,int>a;
    bool ketemuA = 0;
    bool ketemuB = 0;
    int x[4] = {-1,1,0,0};
    int y[4] = {0,0,-1,1};
    vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));

    for(int i=0;i<n;i++){
        cin>>grid[i];
    }

    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(grid[i][j] == 'A'){
                q.push({i,j});
                a = {i,j};
                visited[i][j] = 1;
                ketemuA = 1;
                continue;
            }else if(grid[i][j] == 'B'){
                b = {i,j};
                ketemuB = 1;
                continue;
            }
        }
        if(ketemuA&& ketemuB)break;
    }

    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        for(int i = 0; i<4;i++){
            int nr = p.first + x[i];
            int nc = p.second + y[i];
            if(nr >= 0 && nr <= n-1 && nc >=0&&nc<=m-1){
                if((grid[nr][nc] == '.' || grid[nr][nc]=='B')&&!visited[nr][nc]){
                    visited[nr][nc]=1;
                    q.push({nr,nc});
                    parent[nr][nc] = p;
                }
            }
        }
    }
    if(!visited[b.first][b.second]){
        cout << "NO" << endl;
        return 0;
    }
    string jawab = "";
    pair<int,int>now = b;
    while(now != a){
        int pr = parent[now.first][now.second].first;
        int pc = parent[now.first][now.second].second;
        if(pr == now.first && pc>now.second){
            jawab += 'L';
            now = {pr,pc};
        }else if(pr == now.first && pc<now.second){
            now = {pr,pc};
            jawab += 'R';
        }else if(pr > now.first && pc==now.second){
            now = {pr,pc};
            jawab += 'U';
        }else if(pr < now.first && pc==now.second){
            now = {pr,pc};
            jawab += 'D';
        }
    }
    reverse(jawab.begin(),jawab.end());
    cout << "YES" <<endl<< jawab.length()<<endl<<jawab;
}