#include <bits/stdc++.h>
using namespace std;

int main(){
    long long b;cin>>b;
    long long c;cin>>c;
    long long d;cin>>d;
    long long perulangan = min(b,c);
    long long ans = 0;

    if(c==d){
        if(b>c){
            ans = b-c;
        }
    }

    for(long long i = 1; i<=perulangan;i++){
        if(c%i==d){
            ans ++;
        }
    }

    cout << ans;
}