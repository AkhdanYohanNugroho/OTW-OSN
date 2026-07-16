#include <bits/stdc++.h>
using namespace std;

int s[1005][1005];

int main(){
    int n,a,b;cin>>n>>a>>b;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j<=i;j++){
            if(j==0||j==i){
                s[i][j]=1;
            }else{
                s[i][j] = (s[i-1][j-1] + s[i-1][j]) % 1000000007;
            }
        }
    }
    long long ans = 0;
    for(int i = a; i <=b;i++){
        ans += s[n][i];
    }
    cout << ans%1000000007;
}