#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel nomorPunggung
    int nomorPunggung;
    // Menampilkan pesan untuk meminta input nomor punggung pemain
    cout << "Masukkan nomor punggung pemain: ";
    // Mengambil input nomor punggung dari user
    cin >> nomorPunggung;
    
    // Mengecek apakah nomor punggung merupakan bilangan genap
    if (nomorPunggung % 2 == 0) {
        // Mengecek apakah nomor punggung berada di antara 50 dan 100
        if (nomorPunggung >= 50 && nomorPunggung <= 100) {
            // Menampilkan pesan bahwa pemain dengan nomor punggung tersebut adalah kapten tim
            cout << "Pemain dengan nomor punggung " << nomorPunggung << " berhak dipilih menjadi capten team" << endl;
        } else {
            // Menampilkan pesan bahwa pemain dengan nomor punggung tersebut adalah target attacker
            cout << "Pemain dengan nomor punggung " << nomorPunggung << " adalah target attacker" << endl;
        }
    } else { // Jika nomor punggung merupakan bilangan ganjil
        // Mengecek apakah nomor punggung habis dibagi 5 dan 3
        if (nomorPunggung % 5 == 0 && nomorPunggung % 3 == 0) {
            // Menampilkan pesan bahwa pemain dengan nomor punggung tersebut adalah keeper
            cout << "Pemain dengan nomor punggung " << nomorPunggung << " adalah keeper" << endl;
        } else if (nomorPunggung % 2 != 0 && nomorPunggung < 90) { // Jika nomor punggung tidak habis dibagi 5 dan 3 dan kurang dari 90
            // Menampilkan pesan bahwa pemain dengan nomor punggung tersebut adalah defender
            cout << "Pemain dengan nomor punggung " << nomorPunggung << " adalah defender" << endl;
        } else { // Jika nomor punggung tidak habis dibagi 5 dan 3 dan lebih dari atau sama dengan 90
            // Menampilkan pesan bahwa pemain dengan nomor punggung tersebut adalah playmaker
            cout << "Pemain dengan nomor punggung " << nomorPunggung << " adalah playmaker" << endl;
        }
    }

    // Mengembalikan nilai 0 dan mengakhiri program
    return 0;

}
