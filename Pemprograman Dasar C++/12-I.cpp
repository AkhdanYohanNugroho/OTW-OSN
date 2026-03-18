#include <iostream>
#include <string>
using namespace std;

int main(){
    string b;
    cin >> b;
    for(int a = 1; a <= 100; a++){
        cout << "a = " << a << endl;
        for(int i = 0; i < b.length(); i++){
            int hasil = b[i] + a;
            while(hasil > 122){
                hasil -= 26;
            }
            cout << (char)hasil;
        }
        cout << endl;
    }
}