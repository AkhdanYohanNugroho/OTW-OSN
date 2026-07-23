#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n;cin>>n;
    vector<pair<int,int>>a(n); //nilai, index
    vector<pair<int,int>>hasil(n); //index, selisih

    for(int i = 0;i<n;i++){
        int c;cin>>c;
        a[i] = {c,i};
    }
    sort(a.begin(),a.end());
    // for(int i = 0;i<n;i++){
    //     cout << a[i].first << " " << a[i].second<<endl;
    // }
    for(int i = 0;i<n;i++){
        hasil[i] = {a[i].second, max(a[n-1].first - a[i].first, a[i].first - a[0].first)};
        // if(n%2==0){
        //     if(i+1 <= n/2){
        //         hasil[i] = {a[i].second, a[n-1].first - a[i].first};
        //     }else{
        //         hasil[i] = {a[i].second, a[i].first - a[0].first};
        //     }
        // }else{
        //     if(i+1 <= n/2){
        //         hasil[i] = {a[i].second, a[n-1].first - a[i].first};
        //     }else if(i+1 == (n/2)+1){
        //         hasil[i] = {a[i].second, max(a[n-1].first - a[i].first, a[i].first - a[0].first)};
        //         // cout << "terbesar - tengah: " << a[n-1].first - a[i].first << endl;
        //         // cout << "tengah - terkecil: " << a[i].first - a[0].first << endl;
        //     }else{
        //         hasil[i] = {a[i].second, a[i].first - a[0].first};
        //     }
        // }
    }
    sort(hasil.begin(),hasil.end());
    int ans = 0;
    for(int i = 0;i<n;i++){
        // cout << hasil[i].second<<endl;
        ans += hasil[i].second;
    }

    cout << ans;
}