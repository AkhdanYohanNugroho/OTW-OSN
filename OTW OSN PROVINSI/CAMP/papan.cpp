#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main (){
    int n;cin>>n;
    if(n == 0 || n==1||n==2){
        cout << 1;
        return 0;
    }
    vector<int>v(n+1, 0);
    v[0]=1;
    v[1]=1;
    v[2]=1;
    for(int i = 3; i <=n; i++){
        v[i] = (v[i-1]+v[i-3])%1000000;
    }

    cout << v[n];
}