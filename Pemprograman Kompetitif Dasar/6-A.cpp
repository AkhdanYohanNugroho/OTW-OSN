#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int a,b;cin>>a>>b;
    deque<int>d;

    for(int i = 0; i<a;i++){
        int n;cin >>n;
        d.push_back(n);
    }
    sort(d.begin(),d.end());

    int total = 0;
    int ans = 0;
    while(total<b){
        total+=d.back();
        ans++;
        d.pop_back();
    }
    cout << ans;
}