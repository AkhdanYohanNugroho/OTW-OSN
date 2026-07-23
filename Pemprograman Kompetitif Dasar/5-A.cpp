#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int bill,pang;cin>>bill>>pang;
    int billAsli = bill;
    while(pang != 1){
        if(pang%2==0){
            // cout << "bil awal: " << bill << endl;
            bill*=bill;
            // cout << "bil akhir: " << bill << endl;
            // cout << "pang awal: " << pang << endl;
            pang /=2;
            // cout << "pang akhir: " << pang << endl;
        }else{
            // cout << "bil awal: " << bill << endl;
            bill*=bill*billAsli;
            // cout << "bil akhir: " << bill << endl;
            // cout << "pang awal: " << pang << endl;
            pang -=1;
            pang /=2;
            // cout << "pang akhir: " << pang << endl;
        }
    }

    cout <<bill <<endl;
    // if(bill > 999999){
    //     string s = to_string(bill);
    //     cout << s.substr(s.length()-6);
    // }else{
    //     cout << bill;
    // }
}