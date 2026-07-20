#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;cin>>n>>k;
    deque<int>d;
    for(int i = 0;i<n;i++){
        int c;cin>>c;
        d.push_back(c);
    }
    sort(d.begin(),d.end());
    int bayar = 0;
    for(int i = 0; i<k;i++){
        bayar += d.front();
        d.pop_back();
        d.pop_front();
    }

    while (!d.empty()){
        d.pop_front();
        bayar += d.front();
        d.pop_front();
    }

    cout << bayar;
    
}