#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main (){
    int n;cin>>n;

    vector<int>v(n+1, 0);
    v[0]=1;
    for(int i = 1; i <= n; i++){
        for(int j = 1;j<=6;j++){
            if(i-j >= 0){
                v[i] = (v[i] + v[i-j])%1000000007;
            }
        }
    }
    cout << v[n];
}