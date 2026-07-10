#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int limit = 1000000;

    vector <bool> prima(limit + 1, true);
    prima[0] = false;
    prima[1] = false;
    vector <int> prim;

    for(int i = 2; i <= sqrt(limit); i++){
        if(prima[i]){
            for(int j = i * i; j <= limit; j += i){
                prima[j] = false;
            }
        }
    }

    for(int i = 2; i <= limit; i++){
        if(prima[i]){
            prim.push_back(i);
        }
    }

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        int input;
        cin >> input;
        cout << prim[input-1] << endl;
    }
}