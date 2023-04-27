#include <iostream>   
using namespace std;  

int main() {          
    int umur, tinggi;  // deklarasi variabel umur dan tinggi sebagai integer
    cout << "Masukkan umur anak: ";  // menampilkan pesan "Masukkan umur anak: " ke layar
    cin >> umur;        // menerima input umur dari pengguna dan menyimpannya ke dalam variabel umur
    cout << "Masukkan tinggi anak (dalam cm): ";  // menampilkan pesan "Masukkan tinggi anak (dalam cm): " ke layar
    cin >> tinggi;      // menerima input tinggi dari pengguna dan menyimpannya ke dalam variabel tinggi

    if (umur < 1) {  // jika umur kurang dari 1
        cout << "Dilarang masuk" << endl;  // menampilkan pesan "Dilarang masuk" ke layar
    } else if (umur < 3) {  // jika umur kurang dari 3
        int harga = 30000;  // inisialisasi variabel harga dengan nilai 30000
        if (tinggi > 70) {  // jika tinggi lebih dari 70
            harga += 10000;  // tambahkan 10000 ke harga
        }
        cout << "Tarif harga: Rp " << harga << endl;  // menampilkan tarif harga ke layar
    } else if (umur < 7) {  // jika umur kurang dari 7
        int harga = 40000;  // inisialisasi variabel harga dengan nilai 40000
        if (tinggi > 120) {  // jika tinggi lebih dari 120
            harga += 15000;  // tambahkan 15000 ke harga
        }
        cout << "Tarif harga: Rp " << harga << endl;  // menampilkan tarif harga ke layar
    } else if (umur < 10) {  // jika umur kurang dari 10
        int harga = 50000;  // inisialisasi variabel harga dengan nilai 50000
        if (tinggi > 150) {  // jika tinggi lebih dari 150
            harga += 20000;  // tambahkan 20000 ke harga
        }
        cout << "Tarif harga: Rp " << harga << endl;  // menampilkan tarif harga ke layar
    } else {  // jika umur 10 tahun atau lebih
        cout << "Tarif harga: Rp 80000" << endl;  // menampilkan tarif harga ke layar
    }

    return 0;  // mengembalikan nilai 0 dan mengakhiri program
}
