#include <bits/stdc++.h>
using namespace std;
#define int long long

int ganjil(int n);
int genap(int n);

int ganjil(int n){
    if(n==1){
        return 0;
    }
    n = (n*3)+1;
    cout << n << " ";
    if(n%2==0){
        return genap(n);
    }else{
        return ganjil(n);
    }
}

int genap(int n){
    if(n==1){
        return 0;
    }
    n/=2;
    cout << n << " ";
    if(n%2==0){
        return genap(n);
    }else{
        return ganjil(n);
    }
}

signed main(){
    int n;cin>>n;
    cout << n <<" ";
    if(n%2==0){
        genap(n);
    }else{
        ganjil(n);
    }
}