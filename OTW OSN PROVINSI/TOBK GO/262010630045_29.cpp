#include <bits/stdc++.h>
using namespace std;
#define int long long

int hitung(int a, int b){
    if(a>b)return a-b;
    else return a+b;
}

signed main(){
    int a,b;cin>>a>>b;
    cout << hitung(a,b) <<endl;
    a = hitung(20,5);
    cout << hitung(a,8);
}
