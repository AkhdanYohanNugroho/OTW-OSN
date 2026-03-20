#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> proses(vector<vector<int>> a, int m, int n){
    vector<vector<int>> hasil(m, vector<int>(n));
    hasil = a;
    for(int i = 0; i < m; i++){
        bool valid = false;
        for(int j = 0; j < n; j++){
            if(a[i][j] == 0){
                valid = false;
                break;
            }else{
                valid = true;
            }
        }

        if(valid == true){
            cout << "i = " << i << endl;
            for(int k = 0; k < n; k++){
                hasil[i][k] = 0;
                int satu = 0;
                int nol = 0;
                for(int l = 0; l < i; l++){
                    if(hasil[l][k] == 1){
                        satu +=1;
                    }
                }
                for(int l = i+1; l < m; l++){
                    if(hasil[l][k] == 0){
                        nol += 1;
                    }else{
                        break;
                    }
                }
                for(int l = (i+nol-satu); l >= 0; l--){
                    hasil[l][k] = 0;
                }

                for(int l = (i+nol); l > (i + nol - satu); l--){
                    hasil[l][k] = 1;
                }
            }
            cout << "hasil" << endl;
            for(int i = 0; i < m; i++){
                cout << "i = " << i << "  ";
                for(int j = 0; j < n; j ++){
                    cout << hasil[i][j];
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    return hasil;
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        string input;
        cin >> input;
        for(int j = 0; j < n; j ++){
            matrix[i][j] = stoi(string(1, input[j]));
        }
    }
    cout << "matrix" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j ++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;

    matrix = proses(matrix, m, n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j ++){
            cout << matrix[i][j];
        }
        cout << endl; 
    }
}