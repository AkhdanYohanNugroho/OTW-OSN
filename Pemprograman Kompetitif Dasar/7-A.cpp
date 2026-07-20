#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>

signed main(){
    int n;cin>>n;
    vi koin(n);

    for(int i = 0;i<n;i++){
        cin>>koin[i];
    }
    int k;cin>>k;
    vi dp(k+1,100);
    dp[0] = 0;

    for(int i = 1;i<=k;i++){
        for(int j = 0; j<n;j++){
            if(i>=koin[j] && dp[i-koin[j]]!=1e8){
                dp[i] = min(dp[i], dp[i-koin[j]]+1);
            }
        }
    }

    cout << dp[k];
}