#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input nilai coding
    int skorKoding;
    cout << "Masukkan nilai coding: ";
    cin >> skorKoding;
    
    // Input nilai interview
    string SkorInterview;
    cout << "Masukkan nilai interview: ";
    cin >> SkorInterview;
    
    // Evaluasi nilai coding
    string hasilKoding;
    if (skorKoding > 80) {
        hasilKoding = "LOLOS";
    } else if (skorKoding >= 60) {
        hasilKoding = "DIPERTIMBANGKAN";
    } else {
        hasilKoding = "GAGAL";
    }
    
    // Evaluasi nilai interview
    string hasilInterview;
    if (SkorInterview == "A" || SkorInterview == "B") {
        hasilInterview = "LOLOS";
    } else {
        hasilInterview = "GAGAL";
    }
    
    // Evaluasi hasil penerimaan
    if ((hasilKoding == "LOLOS" || hasilKoding == "DIPERTIMBANGKAN") && hasilInterview == "LOLOS") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }
    
    return 0;
}
