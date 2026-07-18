#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    int t;cin>>t;
    for(int i = 0;i<t;i++){
        int x,y;cin>>x>>y;
        int posX = upper_bound(v.begin(), v.end(), x) - v.begin();
        int posY = upper_bound(v.begin(), v.end(), y) - v.begin();

        cout << posY-posX << endl;
    }
    
}