#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int b; cin>>b;

    vector<int>v;

    while(n !=0){
        v.push_back(n%b);
        n /= b;
    }

    for(int i = v.size()-1; i >=0; i--){
        cout << v[i];
    }
}