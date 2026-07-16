    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n;cin>>n;
        set<int>s;
        long long kpk = 0;
        if(n == 1){
            int satu;
            cin >> satu;
            cout << satu;
            return 0;
        }
        for(int i = 1; i<=n;i++){
            int in;
            cin >> in;
            if(i ==1){
                kpk +=in;
            }else{
                s.insert(in);
            }
        }

        for(auto x:s){
            kpk = (kpk / gcd(kpk, x)) * x;
        }

        cout << kpk;
    }