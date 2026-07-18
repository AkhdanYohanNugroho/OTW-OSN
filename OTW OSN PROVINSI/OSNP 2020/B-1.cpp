#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int x,y;cin>>x>>y;
    vector<int>data(x);
    vector<int>sum(x+1);
    sum[0] = 0;

    for(int i = 0; i<x;i++){
        cin >> data[i];
    }

    for(int i = 1; i<=x; i++){
        sum[i] = sum[i-1]+data[i-1];
    }

    // for(auto x:sum){
    //     cout << x << " ";
    // }
    cout << endl;
    for(int i = 0; i < y;i++){
        int t;cin>>t;
        int ans = upper_bound(sum.begin(), sum.end(), t) - sum.begin();
        cout << ans - 1 << "\n";
    }
}