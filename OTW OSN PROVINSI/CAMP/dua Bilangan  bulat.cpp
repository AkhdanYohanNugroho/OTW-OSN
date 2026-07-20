#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    
}



// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main(){
//     int n,x;cin>>n>>x;
//     deque<int>d;
//     map<int,int>m;
//     vector<pair<int,int>>v(n);
//     for(int i = 0;i<n;i++){
//         int c;cin>>c;
//         m[c] = i;
//         d.push_back(c);
//     }

//     sort(d.begin(),d.end());

//     while(d.size()>1){
//             if(d.front() + d.back() == x){
//                 if(m[d.front()]<=m[d.back()]){
//                     cout << m[d.front()] +1<< " " << m[d.back()]+1;
//                 }else{
//                     cout << m[d.back()] +1<< " " << m[d.front()] +1;
//                 }
//                 break;
//             }
//             if(d.front() + d.back() > x){
//                 d.pop_back();
//             }else
//             if(d.front() + d.back() < x){
//                 d.pop_front();
//             }
//     }

//     if(d.empty()){
//         cout << "IMPOSSIBLE";
//     }
// }