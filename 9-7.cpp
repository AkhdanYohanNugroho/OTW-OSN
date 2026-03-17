#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    if(n == 0){
        return to_string(n);
    }

    if (n / 2 == 0) {
        return to_string(n % 2);
    }
    
    return biner(n/2) + to_string(n%2);    
    
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << biner(0) << endl; //0
    cout << biner(1) << endl; //10
    cout << biner(512) << endl; 
    cout << biner(1697) << endl;
    cout << biner(1048575) << endl;
}
