#include <iostream>
#include <string>
using namespace std;

bool palindrom(string s) {
    int hasil =0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[s.length() - 1 - i]){
            hasil += 1;
        }
    }
    if(hasil == s.length()){
        return true;
    }else{
        return false;
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << palindrom("") << endl; //1
    cout << palindrom("x") << endl; //1
    cout << palindrom("aa") << endl; //1
    cout << palindrom("ab") << endl; //0
    cout << palindrom("ini") << endl; //1
    cout << palindrom("itu") << endl; //0
    cout << palindrom("anna") << endl; //1
    cout << palindrom("ibu ratna antar ubi") << endl; //1
    cout << palindrom("rumah murah") << endl; //0
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl; //0
}
