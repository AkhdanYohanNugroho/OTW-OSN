#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long m = 0;

    vector<bool> prima(n+1, true);
    prima[0] = false;
    prima[1] = false;
    vector<long long> prim;


    for(int i = 2; i <= sqrt(n); i++){
        if(prima[i]){
            for(int j = i*i; j <= n; j+=i){
                prima[j] = false;
            }
        }
    }

    for(long long i = 2; i <= n; i++){
        if(prima[i]){
            if(n%prima[i] == 0){
                prim.push_back(i);
            }
        }
    }

    for (int i = 0; i < prim.size(); i++)
    {
        m = n*prim[i];
        for (int j = 0; j < prima.size(); j++)
        {
            if
            while(m%prima[j]==0){
                p[prima[j]]++;
            }
        }
        
        
    }
    

}