#include <iostream>
#include <vector>
using namespace std;

string tingkat(int n){
    string data = "*\n";
    if(n == 1){
        return "*\n";
    }
    for(int i = 1; i <= n; i++){
        data.push_back('*');
    }

    data.push_back('\n');
    data.erase(0, 2);
    return tingkat(n-1) + data + tingkat(n-1);
}

int main(){
    int x;
    cin >> x;
    cout << tingkat(x);
}