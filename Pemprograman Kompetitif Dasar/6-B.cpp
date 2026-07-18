#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    deque<int>d1;
    deque<int>d2;

    for(int i = 0; i < n;i++){
        int c;cin>>c;
        d1.push_back(c);
    }
    for(int i = 0; i < n;i++){
        int c;cin>>c;
        d2.push_back(c);
    }

    sort(d1.begin(),d1.end());
    sort(d2.begin(),d2.end());
    int ans = 0;

    for(int i = 0; i < n;i++){
        ans +=  d1.front() * d2.back();
        if(!d1.empty())d1.pop_front();
        if(!d2.empty())d2.pop_back();
    }

    cout << ans;
}