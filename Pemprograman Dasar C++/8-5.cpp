#include <iostream>
#include <vector>
using namespace std;

vector<int> jumlah_bersebelahan(vector<int> v) {
    vector<int> b;
    for(int a = 0; a < v.size() - 1; a++){
        int c = v[a] + v[a+1];
        b.push_back(c);
    }
    return b;
}

// Fungsi cetak_vector() dan main() di bawah tidak boleh diubah!

// cout tidak bisa mencetak sebuah vector, sehingga kita perlu
// membuat fungsi tersendiri untuk mencetak vector secara manual.
void cetak_vector(vector<int> v) {
    cout << "vector:";
    for (int x : v) {
        cout << " " << x;
    }
    cout << endl;
}

int main() {
    cetak_vector(jumlah_bersebelahan({1, 2, 3, 4, 5}));
    cetak_vector(jumlah_bersebelahan({17, 8, 1945}));
}
