#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, tempatTinggal, pangkat;
    int umur;
    double tabungan;

    // input data dari user
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Umur: ";
    cin >> umur;
    cout << "Masukkan Tempat Tinggal: ";
    cin.ignore();
    getline(cin, tempatTinggal);
    cout << "Masukkan Uang Tabungan dalam dollar: ";
    cin >> tabungan;

    // analisa data dan tentukan pangkatnya
    if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && tabungan > 10000000) {
        pangkat = "Don";
    }
    else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        pangkat = "Underboss";
    }
    else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && tabungan < 1000000) {
        pangkat = "Capo";
    }
    else {
        pangkat = "tidak mencurigakan";
    }

    // output hasil analisa
    if (pangkat != "tidak mencurigakan") {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan " << pangkat << "." << endl;
    }
    else {
        cout << nama << " " << pangkat << "." << endl;
    }

    return 0;
}
