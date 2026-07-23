#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    vector<int>v;
    while(n != 0){
        v.push_back(n%15);
        n/=15;
    }
    for(int i = 0; i<v.size();i++){
        cout << v[v.size() - 1 -i];
    }
}