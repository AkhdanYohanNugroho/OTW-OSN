#include <iostream>
#include <vector>
using namespace std;


int main(){
    long long n;
    cin >> n;
    vector<long long> data;
    for(int i = 1; i <= n; i++){
        long long input;
        cin >> input;
        data.push_back(input);
    }

    for(int i = 0; i < n; i++){
        long long tidak = data[i];
        long long jumlah = 0;
        for(int a = 0; a < n; a++){
            jumlah += data[a];
        }
        cout << jumlah - tidak << endl;
    }
}