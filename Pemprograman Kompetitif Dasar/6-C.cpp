#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,d;cin >> n>>d;
    map<int,int>m;

    for(int i = 0; i<n;i++){
        int h,b;cin >> h>>b;
        m[h] += b;
    }
    int total = 0;
    int ans = 0;
    for(auto x:m){
        if(total + (x.first*x.second) <= d){
            total += (x.first*x.second);
            ans += x.second;
        }else{
            int sisa = d-total;
            int bil = sisa/x.first;

            ans += bil;
            break;
        }
    }

    cout << ans;
}