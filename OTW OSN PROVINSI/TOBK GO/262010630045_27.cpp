#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int a,b,c;cin>>a>>b>>c;
    a = a - b +(c*2);
    cout << "a="<<a <<" b="<<b<<" c="<<c<<endl;
    b = (a%c) +b;
    cout << "a="<<a <<" b="<<b<<" c="<<c<<endl;
    c = (a+b)/4;
    cout << "a="<<a <<" b="<<b<<" c="<<c<<endl;
    cout << a <<" "<<b<<" "<<c<<endl;
}