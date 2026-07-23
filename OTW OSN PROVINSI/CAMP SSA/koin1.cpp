#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,x;cin>>n>>x;
    vector<int>v(n);
    vector<int>dp(x+1, 0);
    dp[0]=1;
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    
    for(int i = 1; i<=x;i++){
        for(int j = 0; j<n;j++){
            if(i>=v[j]){
                dp[i] = (dp[i] + dp[i-v[j]]) % 1000000007;
            }
        }
    }
    cout << dp[x];
}