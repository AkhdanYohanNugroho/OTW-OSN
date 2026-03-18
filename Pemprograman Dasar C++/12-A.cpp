#include <iostream>
using namespace std;

int main(){
    int n;
    int input;
    cin >> n;
    cin >> input;
    int terbesar = input;
    int terkecil = input;

    for(int i = 1; i <=n; i++){
        cin >> input;
        
        if(input > terbesar){
            terbesar = input;
        }else if(input < terkecil){
            terkecil = input;
        }
    }
    cout << terbesar << " " << terkecil;
}