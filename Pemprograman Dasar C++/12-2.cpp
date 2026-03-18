#include <iostream>
using namespace std;

int f(int a, int b, int k, int x){
    int hasil = a*x + b;
    if(hasil<0){
        hasil *= -1;
    }
    if (1 == k){
        return hasil;
    }else{
        return f(a, b, k-1, hasil);
    }
}

int main(){
    int a,b,k,x;
    cin >> a >> b >> k >> x;
    cout << f(a,b,k,x);
}