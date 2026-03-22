#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string input;
    cin >> input;
    int n = sqrt(input.length());
    while (input.length() > n*n)
    {
        n +=1;
    }
    for(int i = input.length(); i < n*n; i++){
        input.push_back('.');
    }
    vector<vector<char>> m(n, vector<char>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            m[i][j] = input[j];
        }
        input.erase(0, n);
    }

    for(int i = 0; i < n; i++){
        if(i%2==0){
            for(int j = 0; j < n; j++){
                cout << m[i][j];
            }
        }else if(i%2!=0){
            for(int j = 0; j < n; j++){
                cout << m[i][(n-1-j)];
            }
        }
        
        cout << endl;
    }
}