#include <iostream>
#include <cmath>
using namespace std;

bool prima(int n){
    if(n == 1){
        cout << "BUKAN";
        return false;
    }else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                cout << "BUKAN";
                return false;
            }
        }
        cout << "YA";
        return true;
    }
}

int main(){
    int q;
    cin >> q;

    for(int i = 1; i <= q; i++){
        int n;
        cin >> n;
        prima(n);
        cout << endl;
    }
}