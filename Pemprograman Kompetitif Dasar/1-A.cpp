#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int>> awal(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int input;
            cin >> awal[i][j];
        }
    }

    vector<vector<int>> akhir(n, vector<int>());

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            akhir[j].insert(akhir[j].begin(),awal[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << akhir[i][j] << " ";
        }
        cout << endl;
    }
}