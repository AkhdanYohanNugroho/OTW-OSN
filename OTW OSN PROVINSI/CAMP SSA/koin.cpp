#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,x;cin>>n>>x;
    vector<int>v(n);
    vector<int>dp(x+1, 1e8);
    dp[0] = 0;
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(int i = 1; i <= x; i++){
        for(int j = 0;j<n;j++){
            if(i>=v[j]){ //jika i lebih besar dari koin
                dp[i]=min(dp[i], dp[i-v[j]]+1); //maka dia akan membandingkan nilai dp[i] sekarang dengan dp[i] yang menggunakan akhiran koin tertentu
            }
        }
    }
    if(dp[x] != 1e8){
        cout << dp[x];
    }else{
        cout << -1;
    }
}

