#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    int arr[n];

    for(int i = 0; i<n;i++){
        int a; cin >> a;
        arr[i] = a;
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                ans++;
            }
        }
    }
    cout << ans;
}