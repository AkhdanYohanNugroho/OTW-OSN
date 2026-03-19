#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> a, int b, int m, int n){
    int c = m;
    vector<vector<int>> hasil(n, vector<int>(m));
    for(int j = 0; j < m; j++){
        for(int k = 0; k < n; k++){
            hasil[k].insert(hasil[k].begin(),a[j][k]);
        }
    }
    m = n;
    n = c;
    if(b != 1){
        return rotate(hasil, b-1, m, n);
    }else{
        return hasil;
    }
    
}

vector<vector<int>> horizontal(vector<vector<int>> a, int m, int n){
    vector<vector<int>> hasil(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            hasil[i][j] = a[m-i-1][j];
        }
    }
    return hasil;
}

vector<vector<int>> vertikal(vector<vector<int>> a, int m, int n){
    vector<vector<int>> hasil(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            hasil[i][j] = a[i][n-j-1];
        }
    }
    return hasil;
}

int main(){
    int m,n,x;
    cin >> m >> n >> x;
    vector<vector<int>> awal(m, vector<int>(n));
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> awal[i][j];
        }
    }

    vector<string> inputx(x);
    for(int i = 0; i < x; i++){
        cin >> inputx[i];
    }

    for(int i = 0; i < inputx.size(); i++){
        if(isdigit(inputx[i][0])){
            int b = stoi(inputx[i])/90;
            awal = rotate(awal, b, m, n);
            if(b%2 != 0){
                swap(m,n);
            }
        }else if(inputx[i] == "_"){
            awal = horizontal(awal, m, n);
        }else if(inputx[i] == "|"){
            awal = vertikal(awal, m, n);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << awal[i][j] << " ";
        }
        cout << endl;
    }
}