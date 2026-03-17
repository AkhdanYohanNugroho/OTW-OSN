#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r = 1;
    int c = n;
    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            int a = n/i;
            if(r <= c){
                int bu = max(r,c) - min(r,c);
                int b = max(i,a) - min(i,a);
                if(b < bu){
                    r = i;
                    c = a;
                }
            }
        }
    }
    cout << r ;
    cout << " ";
    cout << c ;
}