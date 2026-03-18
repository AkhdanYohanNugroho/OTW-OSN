#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n, d;
    vector<int> x = {};
    vector<int> y = {};
    cin >> n >> d;
    int terbesar = 0;
    int terkecil = 2000000;

    for(int i = 1; i <= n; i++){
        int xinput,yinput;
        cin >> xinput >> yinput;
        x.push_back(xinput);
        y.push_back(yinput);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int hasil, jumlahx, jumlahy;
            jumlahx = x[j]-x[i];
            jumlahy = y[j]-y[i];

            if(jumlahx < 0){
                jumlahx *= -1;
            }
            if(jumlahy < 0){
                jumlahy *= -1;
            }

            hasil = pow(jumlahx, d) + pow(jumlahy, d);

            if(hasil < 0){
                hasil *= -1;
            }

            if(terbesar <= hasil){
                terbesar = hasil;
            }
            if(terkecil >= hasil){
                terkecil = hasil;
            }
        }
    }
    cout << terkecil << " " << terbesar << endl;
}