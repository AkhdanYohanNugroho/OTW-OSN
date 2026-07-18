#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin>>n; // input 1

    for(int i = 0; i<n;i++){
        int c;cin>>c; //input 2
        vector<int>v(c);//tamplate

        for(int j = 0; j<c;j++){ //input arr
            cin >> v[j];
        }
        int f;cin>>f;//input 4
        for(int j = 0;j<f;j++){ //input kata
            string s;cin>>s;
            map<char,int>m;
            map<int,char>m1;
            // cout << s << endl;
            bool auth = true;
            if(s.length()!=v.size()){
                cout << "NO"<<endl;
                continue;
            }
            
            for(int k = 0;k<c;k++){
                if(m.count(s[k])){
                    if(m[s[k]] != v[k]) auth = false;
                }else{
                    m[s[k]] = v[k];
                }
                if(m1.count(v[k])){
                    if(m1[v[k]]!=s[k])auth = false;
                }else{
                    m1[v[k]] = s[k];
                }
            }


            if(auth){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}