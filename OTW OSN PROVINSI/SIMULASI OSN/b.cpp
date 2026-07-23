#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    string si;cin>>si;
    cout << si<<endl;
    int o = 0;
    int s = 0;
    int n = 0;
    for(int i = 0; i < t;i++){
        if(si[i]=='O'){
            o++;
        }else if(si[i] == 'S'){
            s++;
        }else if(si[i] == 'N'){
            n++;
        }
    }

    cout << min(min(o,s),n);
}