#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pangkat = 0;
    int sisa = 0;
    bool pertama = true;

    for(int i = 2; i <= 1000; i++){
        pangkat = 0;
        if(i*i <= n){
            while (n%i == 0)
            {
                if(n == 1){
                    break;
                }
                n /= i;
                pangkat += 1;
            }
            
            if(pangkat == 1){
                if(pertama == true){
                    cout << i;
                    pertama = false;
                }else{
                    cout << " x "<< i ;
                }
                
            }else if(pangkat > 1){
                if(pertama == true){
                    cout << i << "^" << pangkat;
                    pertama = false;
                }else{
                    cout << " x " << i << "^" << pangkat;
                }
            }
        }
        else{
            if(n != 1){
                if(pertama == true){
                    cout << n;
                    pertama = false;
                }else{
                    cout << " x "<< n ;
                }
            }
            break;
        }
    }
}