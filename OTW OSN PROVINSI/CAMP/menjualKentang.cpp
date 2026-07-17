#include <bits/stdc++.h>
using namespace std;
#define int long long

long long sama(){
    
}

signed main(){
    int n,m; cin >> n>> m;
    vector<int>v(m);
    long long rataA = 0;
    long long rataB = 0;

    for(int i = 0; i<n;i++){
        int c;cin >> c;
        rataA += c;
    }
    for(int i = 0; i<m;i++){
        cin >> v[i];
        rataB += v[i];
    }
    sort(v.begin(),v.end());
    if(rataA * m > rataB * n){
        cout << 0;
        return 0;
    }

    long long countB = m;
    long long ans = 0;
    // cout << rataA << endl;
    // cout << rataB << endl;
    for(int i = 1; i < m; i++){
        if(rataA*countB <= rataB*n){
            n++;
            countB--;
            rataA += v[countB];
            rataB -= v[countB];
            ans += v[countB];
            if(v[countB-1] == v[countB]){
                for(int j = countB-1; j >= 0; j--){
                    if(v[countB] == v[j]){
                        n++;
                        countB--;
                        rataA += v[countB];
                        rataB -= v[countB];
                        ans += v[countB];
                    }else{
                        break;
                    }
                }
            }
        }else{
            break;
        }
    }
    if(rataA * countB > rataB * n){
        cout << ans;
    }else{
        cout << -1;
    }
}