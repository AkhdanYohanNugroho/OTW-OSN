#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;

    bool auth = false;
    for(int i = 0; i<n;i++){
        int c;cin>>c;
        if(c%2==0){
            cout << "YA";
            auth = true;
            return 0;
        }
    }
    if(!auth){
        cout << "TIDAK";
    }
}