#include <bits/stdc++.h>
using namespace std;


int main(){
    long long n,p,l;
    cin >> n>>p>>l;

    long long luas = n*(p*l);
    float sisia = ceil(sqrt(luas));
    long long sisi = sisia;

    while(n > (sisi/p)*(sisi/l)){
        sisi++;
    }
    cout << sisi;
}