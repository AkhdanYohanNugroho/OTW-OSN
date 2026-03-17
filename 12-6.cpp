#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    
    size_t ketemu;
    while ((ketemu = s.find(t)) != string::npos)
    {
        s.erase(ketemu, t.length());
    }
    
    cout << s;
}