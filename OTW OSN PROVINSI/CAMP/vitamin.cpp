#include <bits/stdc++.h>
using namespace std;
#define int long long

//harga | kualitas | dosis 

signed main(){
    int n,x;cin>>n>>x;//x modal
    vector<int>harga(n);
    vector<int>kualitas(n);
    vector<int>dosis(n);
    vector<int>dp(x+1, 0);
    
    for(int i = 0; i<n;i++){
        cin >> harga[i];
        cin >> kualitas[i];
        cin >> dosis[i];
    }
    
    for(int i = 0; i<n;i++){
        if(dosis[i]){
            for(int j = x; j >= harga[i]; j--){
                dp[j] = max(dp[j-harga[i]] + kualitas[i], dp[j]);
            }
        }else{
            for(int j = harga[i]; j <= x; j++){
                dp[j] = max(dp[j-harga[i]] + kualitas[i], dp[j]);
            }
        }
        // for(int j = 0; j<n;j++){
        //     if(i>=harga[j]){
                
        //     }
        // }
    }
    cout << dp[x];
}