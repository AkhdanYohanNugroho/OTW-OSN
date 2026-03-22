#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;

        int hitung = 0;
        for(int j = 1; j <= sqrt(input); j++){
            if(input%j==0){
                hitung ++;
                if(j!=input/j){
                    hitung ++;
                }
            }
        }

        if(hitung > 4){
            cout << "BUKAN" << endl;
        }else{
            cout << "YA" << endl;
        }
    }
}