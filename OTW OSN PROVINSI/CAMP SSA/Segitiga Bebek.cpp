#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<double>x;
    vector<double>y;
    for(int i = 0; i <n;i++){
        double a,b;
        cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
    }

    double minim = 1e18;
    bool sma = false;

    for(int i = 0;i<n;i++){
        for(int j = i+1; j<n;j++){
            for(int k = j+1;k<n;k++){
                double luas = abs(
                    x[i]*(y[j]-y[k]) +
                    x[j]*(y[k]-y[i]) +
                    x[k]*(y[i]-y[j])
                );
                if(luas == 0)continue;

                if(luas/2<minim&&abs(luas/2-minim) > 0.01){
                    minim = luas/2;
                    sma = 0;
                }else if(abs(luas/2-minim) < 0.01){
                    sma = 1;
                }
            }
        }
    }
    // if(n>=3  && ans==1e18){
    //     cout <<fixed<<setprecision(2)<< 0.00;
    //     return 0;
    // }
    if(minim!=1e18 && !sma){
        cout<<fixed<<setprecision(2)<<minim;
    }else{
        cout <<fixed<<setprecision(2)<< -1.00;
    }
}
