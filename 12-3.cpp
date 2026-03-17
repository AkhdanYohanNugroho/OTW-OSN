#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int angka = 0;
    for(int i = 1; i <= n; i++){
        for(int a = 1; a <= i; a++){
            if(angka == 10){
                angka = 0;
            }
            cout << angka;
            angka += 1;
        }
        cout << endl;
    }
}