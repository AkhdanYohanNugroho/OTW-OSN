#include <bits/stdc++.h>
using namespace std;
int s[16][16];
int main(){
    int n; cin>> n;
    for(int i = 0;i<n;i++){
        int abal,aball; cin>>abal>>aball;
    }

    if(n < 3){
        cout << 0;
        return 0;
    }

    for(int i = 0; i <= n;i++){
        for(int j = 0;j<=i;j++){
            if(j==0||j==i){
                s[i][j]=1;
            }else{
                s[i][j]= s[i-1][j-1]+s[i-1][j];
            }
        }
    }

    cout << s[n][3];
}