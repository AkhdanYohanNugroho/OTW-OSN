#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double alas = 1213;
    double tinggi = 1619;

    double luas = alas * tinggi / 2;
    cout << fixed << setprecision(1) << luas << endl;
}
