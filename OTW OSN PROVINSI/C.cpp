#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<bool> prima(n+1, true);
    prima[0] = false;
    prima[1] = false;
    vector<long long> prim;

    for(int i = 2; i <= sqrt(n); i++){
        if(prima[i]){
            for(int j = i*i; j <= n; j+=i){
                prima[j] = false;
            }
        }
    }

    for(long long i = 2; i <= n; i++){
        if(prima[i]){
            prim.push_back(i);
        }
    }


    int ans = 0;
    for(int i = 0; i < prim.size(); i++){
        if(n%prim[i]==0){
            ans++;
        }
    }

    cout << ans;
}