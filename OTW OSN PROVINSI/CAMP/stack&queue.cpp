#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main (){
    int n;cin>>n;
    deque<int>d;
    for(int i = 0;i<n;i++){
        string a;cin>>a;
        
        if(a=="push_front"){
            int b;cin>>b;
            d.push_front(b);
        }else if(a == "push_back"){
            int b;cin>>b;
            d.push_back(b);
        }else if(a == "pop_front"){
            d.pop_front();
        }else{
            d.pop_back();
        }
    }

    for(auto x:d){
        cout << d.front()<<endl;
        d.pop_front();
    }
}