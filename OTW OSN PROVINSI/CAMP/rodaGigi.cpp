#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    vector<int>v(n);

    for(int i = 0;i<n;i++){
        int c;cin>>c;
        vector<bool>b(101);
        bool auth = false;
        for(int i = 0; i<c;i++){
            int a;cin>>a;
            if(b[a]){
                auth = true;
            }else{
                b[a]=true;
            }
        }
        if(auth){
            cout << "Yes"<<endl;
        }else{
            cout << "No"<<endl;
        }
    }
}