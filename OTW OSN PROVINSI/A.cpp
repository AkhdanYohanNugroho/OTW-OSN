#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    int O,S,N,P;
    O=0;
    S=0;
    N=0;
    P=0;

    for(auto c:a){
        if(c =='P'){
            P++;
        }
    }


    int ans = -1;

    for(auto c:a){
        if(c=='P'){
            P--;
            if(O !=0&& S !=0&& N !=0){
                ans = max(ans, O+S+N+P+1);
            }
        }
        if(c=='O'){
            O++;
        }
        if(c=='S'){
            S++;
        }
        if(c=='N'){
            N++;
        }
    }

    cout << ans;
}