#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    set<int> v;
    int auth = 1;
    for(int i = 1; i<n;i++){
        int a;
        cin>>a;
        v.insert(a);
    }

    for(auto x:v){
        if(x!=auth){
            cout << auth;
            return 0;
        }
        auth++;
    }

    cout << n;
}

