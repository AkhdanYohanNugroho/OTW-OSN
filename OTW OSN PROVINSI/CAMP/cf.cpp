#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;

    for(int i = 1; i<=n;i++){
        int a;
        string b,c;
        cin >> a >> b >> c;

        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        
        if(c==b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}