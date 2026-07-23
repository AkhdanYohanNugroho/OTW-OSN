#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    double rata = 0;
    int maks = 0;
    int lulus = 0;
    for(int i = 0; i<n;i++){
        int c;cin>>c;
        rata += c;
        maks = max(c,maks);
        if(c>=75){
            lulus ++;
        }
    }
    cout << lulus <<" "<<setprecision(4) <<rata/n<<" "<< maks;
}