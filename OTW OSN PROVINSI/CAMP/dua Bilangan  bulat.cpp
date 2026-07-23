#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, x;cin>>n>>x;
    vector<pair<int,int>>v(n);
    // vector<pair<int, int>>
    for(int i =0;i<n;i++){
        int c;cin>>c;
        v[i] = {c, i+1};
    }
    sort(v.begin(),v.end());
    // for(int i =0;i<n;i++){
    //     cout << v[i].first<< " "<< v[i].second << endl;
    // }
    // for(int i =0;i<n;i++){
    //     for(int j = i+1;j<n;j++){
    //         if(v[i]+v[j]==x){
    //             cout << i+1 << " " << j+1;
    //             return 0;
    //         }
    //     }
    // }
    int l = 0; int r = n-1;
    while(l<r){
        if(v[l].first+v[r].first<x){
            l++;
        }else if(v[l].first+v[r].first>x){
            r--;
        }else{
            if(v[l].second > v[r].second){
                cout << v[r].second << " " << v[l].second;
            }else if(v[l].second < v[r].second){
                cout << v[l].second << " " << v[r].second;
            }
            return 0;
        }
    }
    cout  << "IMPOSSIBLE";
}