#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,h;cin>>n>>h;
    vector<pair<int,int>>v(n);
    vector<int>hasil;
    int ans = 0;
    for(int i = 0;i<n;i++){
        int c;cin>>c;
        if(c>h){
            ans += c-h;
            hasil.push_back(i+1);
        }
    }
    cout << ans << endl;
    for(auto x:hasil){
        cout << x<< " ";
    }
}