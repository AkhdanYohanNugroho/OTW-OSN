#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long r = 1;
    long long c = n;
    for (long long i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            long long a = n/i;
            if(r <= c){
                long long bu = max(r,c) - min(r,c);
                long long b = max(i,a) - min(i,a);
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