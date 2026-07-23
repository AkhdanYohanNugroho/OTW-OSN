#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin>>n;
    vector<int>v(n);
    int ans = 0;
    for(int i = 0; i<n;i++){
        if(i==0){
            cin>>v[i];
            // cout << v[i]<<endl;
        }else{
            cin>>v[i];
            // cout << v[i]<<endl;
            if(v[i-1]>v[i]){
                ans += v[i-1] - v[i];
                v[i] = v[i-1];
            }
        }
    }
    cout << ans;
}