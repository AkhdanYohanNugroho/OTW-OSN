#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i = 0; i < s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='<'){
            st.push(s[i]);
        }else{
            if(st.empty()){
                cout << "No";
                return 0;
            }
            if(s[i]==')'){
                if('('!=st.top()) {
                    cout << "No";
                    return 0;
                }
                st.pop();
            }else if(s[i]==']'){
                if('['!=st.top()) {
                    cout << "No";
                    return 0;
                }
                st.pop();
            }else{
                if('<'!=st.top()) {
                    cout << "No";
                    return 0;
                }
                st.pop();
            }
        }
    }
    if(st.empty()){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
//({<()>})