// p1 p2
// p1 p3

// (x2-x1)(y2-y1) - (x3-x1)(y3-y1)
//x1 y1 x2 y2 x3 y3
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main (){
    int n;cin>>n;
    vector<int>v(6);
    for(int i = 0; i<n;i++){
        for(int j = 0;j<6;j++){
            cin>>v[j];
        }
        // for(int j = 0;j<6;j++){
        //     cout<<v[j];
        // }
        // cout << endl<<((v[2]-v[0])*(v[5]-v[1])) - ((v[4]-v[0])*(v[3]-v[1]))<< endl;
        if(((v[2]-v[0])*(v[5]-v[1])) - ((v[4]-v[0])*(v[3]-v[1]))<0){
            cout << "RIGHT" << endl;
        }else if(((v[2]-v[0])*(v[5]-v[1])) - ((v[4]-v[0])*(v[3]-v[1]))>0){
            cout << "LEFT" << endl;
        }else{
            cout << "TOUCH" << endl;
        }
    }
}