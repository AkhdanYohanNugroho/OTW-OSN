#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,x;cin>>n>>x;
    vector<int>v(n);
    vector<int>dp(x+1, 0);
    dp[0]=1;

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(int i = 0;i<n;i++){
        for(int j = 1;j<=x;j++){
            if(j>=v[i]){
                dp[j] =(dp[j] + dp[j-v[i]])%1000000007;
            }
        }
    }
    cout << dp[x];
}