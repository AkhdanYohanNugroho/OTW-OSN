#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        s.insert(a);
    }
    int ans = 0;
    for(auto x:s){
        ans++;
    }

    cout << ans;
    return 0;
}