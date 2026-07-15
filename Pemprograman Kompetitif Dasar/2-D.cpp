#include <bits/stdc++.h>
using namespace std;

//a1  a3
//a2  a4

int main(){
    long long a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if(a2 == a4){
        cout << a1+a3 <<" "<<a2;
        return 0;
    }
    long long kpk = (a2*a4)/(gcd(a2,a4));
    a1 *= kpk/a2;
    a3 *= kpk/a4;
    long long pembilang = a1+a3;
    long long penyebut = kpk;

    //penyederhanaan
    long long fpb = gcd(pembilang, kpk);
    pembilang /= fpb;
    penyebut /= fpb;

    cout << pembilang<<" "<<penyebut;
}