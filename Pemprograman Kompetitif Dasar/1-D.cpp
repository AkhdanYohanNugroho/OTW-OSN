#include <iostream>
#include <string>
#include <vector>
using namespace std;

string proses(vector<vector<char>> a, int n){
    vector<char> terjemah(n, '\0');
    string hasil;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[0][i] == a[0][j]){
                if(a[1][i] != a[1][j]){
                    return "Pak Dengklek bingung";
                }
            }

            if(a[1][i] == a[1][j]){
                if(a[0][i] != a[0][j]){
                    return "Pak Dengklek bingung";
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        bool valid = false;
        for(int j = 0; j < n; j++){
            if(a[2][i] == a[1][j]){
                valid = false;
                hasil.push_back(a[0][j]);
                break;
            }else{
                valid = true;
            }
        }
        
        if(valid == true){
            hasil.push_back('?');
        }
    }

    return hasil;
}

int main(){
    int n;
    cin >> n;
    vector<vector<char>> data(3, vector<char>(n));
    for(int i = 0; i < 3; i++){
        string c;
        cin >> c;
        for(int j = 0; j < n; j++){
            data[i][j] = c[j];
        }
    }

    cout << proses(data, n);
}