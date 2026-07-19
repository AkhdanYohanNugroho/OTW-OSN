#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;cin>> n>>m;
    multiset<int>v;
    queue<int>st;

    for(int i = 0; i<n;i++){
        int c;cin>>c;
        v.insert(c);
    }

    for(int i = 0; i<m;i++){
        int c;cin>>c;
        st.push(c);
    }

    while(!st.empty()){
        int beli = 0;

        auto it = v.find(st.front()); 
        if (it != v.end()) {
            beli = st.front();
            v.erase(it); // Hanya menghapus satu angka 5
        }else{
            auto it = v.upper_bound(st.front()); 
            if (it != v.begin()) {
                if(*prev(it)<=st.front()){
                    beli = *prev(it);
                    v.erase(prev(it));
                }
            }
        }
        

        if(beli!=0){
            cout << beli << endl;
        }else{
            cout << -1 << endl;
        }
        st.pop();
    }
}