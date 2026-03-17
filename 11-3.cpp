#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r = 1;
    int c = n;
    for (int i = 1; i <= n; i++){
        for (int a = 0; a <= n; a++){
            if (i * a == n)
            {
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