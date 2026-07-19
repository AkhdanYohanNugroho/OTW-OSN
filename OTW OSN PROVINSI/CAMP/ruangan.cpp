#include <bits/stdc++.h>
using namespace std;
#define int long long

int arahX[4] = {-1,1,0,0};
int arahY[4] = {0,0,-1,1};
int n;
int m;
vector<vector<bool>>denah (n, vector<bool>(m, false));
void dfs(int i,int j, int n, int m){
    
    // denah[i][j] = true;
    
    cout << endl;
    int nx = 0;
    int ny = 0;
    for(int k = 0;k<4;k++){
        nx = j + arahX[k]
        ny = i + arahY[k];

        if(nx >= 0 && nx < n && ny >= 0 && ny<m && !denah[i][j]){
            denah[i][j] = true;
            for(int i = 0; i<5;i++){
                for(int j = 0; j<8;j++){
                    cout << denah[i][j];
                }
                cout << endl;
            }
            cout << endl;
        }  
    }
    
    // if(denah[i+1][j]==0){
    //     dfs(denah,i+1,j,ruang);
    // }
    // if(denah[i-1][j]==0){
    //     dfs(denah,i-1,j,ruang);
    // }
    // if(denah[i][j+1]=='.'){
    //     dfs(denah,i,j+1,ruang);
    // }
    // if(denah[i][j-1]=='.'){
    //     dfs(denah,i,j-1,ruang);
    // }
}

signed main(){
    cin>>n>>m;
    vector<string>v(n);

    for(int i = 0; i<n;i++){
        cin >> v[i];
    }

    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(v[i][j]=='#'){
                denah[i][j] = true;
            }
        }
    }

    int room = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(denah[i][j] == 0){
                cout << "jalann" << endl;
                dfs(i,j, n,m);
                room++;
                cout << "jalan" << endl;
            }
        }
    }

    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cout << denah[i][j];
        }
        cout << endl;
    }

}