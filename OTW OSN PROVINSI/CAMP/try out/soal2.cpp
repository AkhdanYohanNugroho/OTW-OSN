#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main (){
    int p;cin>>p;

    while (p--)
    {
        int n,k;cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);

        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 0;i<n;i++){
            cin>>b[i];
        }
        
        int m = 0;
        int terbesar = 0;
        int terkecil = 1e8;
        bool auth = 1;
        for(int i=0;i<n;i++){
            terbesar = max(terbesar,a[i]);
            terkecil = min(terkecil,a[i]);
            if(b[i]!=-1){
                if(m==0)m = a[i]+b[i];
                if(a[i]+b[i]!=m){
                    cout << 0 << endl;
                    auth = 0;
                    break;
                }
                if(a[i]+b[i]>k){
                    cout << 0 << endl;
                    auth = 0;
                    break;
                }
            }
        }

        if(m>=terbesar&&auth){
            cout << 1<<endl;
        }
        if(m<terbesar&&auth&&m!=0){
            cout << 0<<endl;
        }
        if(m==0&&auth){
            cout << k-terbesar+terkecil+1<<endl;
        }
    }
}