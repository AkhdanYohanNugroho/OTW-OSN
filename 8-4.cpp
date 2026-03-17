#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        char a = c - 'a' + 'A';
        if(a == 'Z'){
            a = 'A';
        }else{
            a += 1;
        }

        cout << a;
    }
    cout << endl;
}
