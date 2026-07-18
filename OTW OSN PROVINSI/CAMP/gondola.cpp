#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,x;cin>>n>>x;
    deque<int>d;

    for(int i = 0 ;i<n;i++){
        int p; cin >> p;
        d.push_back(p);
    }

    sort(d.begin(), d.end());

    int ans = 0;
    while(!d.empty()){
        if(d.front() + d.back() <= x){
            ans++;
            if(!d.empty())d.pop_front();
            if(!d.empty())d.pop_back();
        }else{
            ans++;
            if(!d.empty())d.pop_back();
        }
    }
    cout << ans;
}