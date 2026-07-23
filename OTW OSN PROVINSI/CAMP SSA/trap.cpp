#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    vector<vector<char>> v(n, vector<char>(n));
    vector<vector<int>> vi(n, vector<int>(n, 0));
    for(int i = 0; i<n;i++){
        string a;
        cin >> a;
        for(int j = 0;j<n;j++){
            v[i][j] = a[j];
        }
    }
    if(v[0][0]=='*'){
        cout << 0;
        return 0;
    }
    vi[0][0]=1;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == 0&&j==0){
                continue;
            }
            if(i == 0){
                if(v[i][j]=='.'){
                    vi[i][j] = vi[i][j-1];
                    continue;
                }
            }else if(j == 0){
                if(v[i][j]=='.'){
                    vi[i][j] = vi[i-1][j];
                    continue;
                }
            }
            if(v[i][j]=='.'){
                vi[i][j] = (vi[i-1][j] + vi[i][j-1])%1000000007;
            }
        }
    }

    // for(int i = 0; i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cout << vi[i][j];
    //     }
    //     cout << endl;
    // }

    cout << (vi[n-1][n-1]);
}