#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;cin>>n>>m;
    vector<string>v(n);
    vector<vector<int>>vv(n,vector<int>(m, 50));

    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    for(int i = 0; i <n;i++){
        for(int j = 0; j<m;j++){
            if(v[i][j]=='A'){
                vv[i][j]=1;
            }
            if(v[i][j] == 'B'){
                vv[i][j] = 20;
            }
            if(v[i][j]=='.'){
                vv[i][j] = 100
            }
        }
    }
    // cout << (min({vv[1+1][1],vv[1-1][1],vv[1][1+1],vv[1][1-1]}) + 1);
    for(int i = 0; i <n;i++){
        for(int j = 0; j<m;j++){
            if(vv[i][j]==100){
                vv[i][j] = min(min(vv[i-1][j], vv[i+1][j]), min(vv[i][j+1], vv[i][j-1])) + 1;
            }
        }
    }
    for(int i = 0; i <n;i++){
        for(int j = 0; j<m;j++){
            // if(v[i][j]=='A'){
            //     vv[i][j]=1;
            // }
            // if(v[i][j] == '#'){
            //     vv[i][j] = 10e8;
            // }
            cout << vv[i][j] << "     ";
        }
        cout << endl;
    }
}