#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<vi>


signed main(){
    int n,k;cin>>n>>k;
    vi harga(k);
    vi berat(k);
    // vi dp(n+1,0);
    vii dp(k+1, vi(n+1,0));

    for(int i = 0; i<k;i++){
        cin >> berat[i];
        cin >> harga[i];
    }
    for(int i = 1;i<=k;i++){
        // cout << i <<endl;
        for(int j = 1;j<=n;j++){
            // cout << j<<endl;
            // cout << dp[i][j]<<" ";
            if(j>=berat[i-1]){
                dp[i][j] = max(dp[i-1][j-berat[i-1]] + harga[i-1], dp[i-1][j]);
            }
        }
        cout <<endl;
    }

    // for(int i = 0;i<=k;i++){
    //     for(int j = 0;j<=n;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for(int i = 0; i<k;i++){
    //     for(int j = n;j>=berat[i];j--){
    //         dp[j] = max(dp[j], dp[j-berat[i]]+harga[i]);
    //     }
    // }
    // cout <<dp[n];
}