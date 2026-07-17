#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin>>n; // input 1

    for(int i = 0; i<n;i++){
        int c;cin>>c; //input 2
        vector<int>v(c);
        map<int,int>m;

        for(int j = 0; j<c;j++){ //input arr
            if(j == 0){
                cin >> v[j];
            }else{
                cin >> v[j];
                for(int f = 0; f < j;f++){
                    if(v[f]==v[j]){
                        m[f] = j;
                    }
                }
            }
        }
        int f;cin>>f;//input 4
        for(int j = 0;j<f;j++){ //input kata
            string s;cin>>s;
            bool valid = true;
            cout << s<<endl;
            if(s.length()!=v.size()){
                cout << "NO" << endl;
                valid = false;
            }else{
                vector<bool>o(s.length(), false);
                for(auto x:m){
                    if(s[x.first]!=s[x.second]){
                        cout << "NO" << endl;
                        valid = false;
                        break;
                    }
                    o[x.first] = true;
                    o[x.second] = true;
                }
                bool auth = false;
                for(int u = 0; u < s.length()-1;u++){
                    if(auth)break;
                    cout << "u: " << u<<endl;
                    bool pjalan = false;
                    for(int p = u+1; p<s.length();p++){
                        if(auth)break;

                        if(o[u] || o[p]){
                            break;
                        }
                        if(s[u]==s[p]){
                            cout << "NO" << endl;
                            valid = false;
                            auth = true;
                            break;
                        }
                        pjalan = false;
                        cout << "p: " << p<<endl;
                    }
                }
            }
            if(valid)cout << "YES" <<endl;
        }
    }
}