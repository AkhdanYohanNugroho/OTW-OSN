#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    long long k;
    cin >> n>>m>>k;
    vector<long long>a;
    for(int i = 1; i <=n;i++){
        int A;
        cin >> A;
        a.push_back(A);
    }
    auto max = max_element(a.begin(),a.end());
    vector<int>jumlah(*max+1, 0);
    
    for(int i = 0; i <= *max;i++){
        for(int j = 0; j < a.size(); j++){
            if(a[j] == i){
                jumlah[i] += 1;
            }
        }
    }

}

