#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m,k;cin>>n>>m>>k;
    deque<int>vn(n);
    deque<int>vm(m);

    for(int i =0;i<n;i++){
        cin>>vn[i];
    }

    for(int i =0;i<m;i++){
        cin>>vm[i];
    }

    sort(vn.begin().vn.end());
    sort(vm.begin().vm.end());
    // for(int i =0;i<n;i++){
    //     cout<<vn[i];
    // }
    // cout << endl;
    // for(int i =0;i<m;i++){
    //     cout <<vm[i];
    // }
    int ans = 0;
    while(!vm.empty()){
        if(vm.front()<vn.front()){
            vm.pop_front();
        }
    }
}