#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    cin >> v[0];
    int a;cin>>a;
    int b;cin>>b;
    int c;cin>>c;

    for(int i = 1; i<n;i++){
        v[i] = ((a*v[i-1]) + b) % c;
    }
    int sum = 0;
    for(int i = 0; i < k;i++){
        sum += v[i];
    }
    int hasil = sum;
    for(int i = 1;i <= n-k;i++){
        sum += v[k+i-1] - v[i-1];
        hasil ^= sum;
    }
    cout << hasil;
}