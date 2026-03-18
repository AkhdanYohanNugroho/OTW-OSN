#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n,m,p;
    cin >> n >> m >> p;

    vector<vector<int>> matrixA(n, vector<int>(m));
    vector<vector<int>> matrixB(m, vector<int>(p));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matrixA[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cin >> matrixB[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int a=0;a<p;a++){
            int jumlah = 0;
            for(int j=0;j<m;j++){
                jumlah += matrixA[i][j] * matrixB[j][a];
            }
            cout << jumlah <<" ";
            jumlah = 0;
        }
        cout << endl;
    }
}