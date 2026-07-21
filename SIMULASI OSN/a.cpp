#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;cin>>n>>m;
    if(m==0){
        cout << 0;
    }else{
        cout << m%n;
    }
}