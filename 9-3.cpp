#include <iostream>
using namespace std;

void cetak_menurun(int n) {
    cout << n << endl;
    if (n > 1)
    {
        cetak_menurun(n - 1);
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cetak_menurun(10);
}
