#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,x;cin>>n>>x;
    vector<int>h(n);
    vector<int>hal(n);
    vector<int>dp (x+1);

    for(int i = 0;i<n;i++){
        cin >> h[i];
    }
    for(int i = 0;i<n;i++){
        cin >> hal[i];
    }

    for(int i = 0; i<n;i++){
        // cout << "i: "<<i << endl;
        for(int j = x;j>=h[i];j--){  
            // cout << "j: "<<j << " |";
            // cout << "dp["<<j << "]: " << dp[j]<<" |";
            // cout << "h["<<i << "]: " << h[i]<<" |";
            // int tidak = dp[j];
            // int iya = 0;
            if(j >= h[i]){
                // if(dp[i][j] > dp[i-1][j]){
                //     dp[i][j] = hal[i];
                // }
                // iya = dp[j-h[i]]+hal[i];
                dp[j] = max(dp[j-h[i]]+hal[i], dp[j]);
            }
            // cout << "iya: "<<iya << " |";
            // cout << "tidak: "<<tidak << endl;
            // dp[j] = max(iya,tidak);
        }
    }
    cout << dp[x];
    // for(int i = 0; i<=n;i++){
    //     for(int j = 0;j<=x;j++){
    //         cout << dp[i][j] << "   ";
    //     }
    //     cout << endl;
    // }
}