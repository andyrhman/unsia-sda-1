#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel untuk waktu olahraga dan kalori yang terbakar
    int lariTime = 0, pushUpTime = 0, plankTime = 0;
    const int KALORI_LARI = 60;
    const int KALORI_PUSHUP = 200;
    const int KALORI_PLANK = 5;

    // Input lama waktu olahraga
    string input;

    cout << "Masukkan lama waktu olahraga lari (dalam menit): ";
    getline(cin, input);
    if (!input.empty()) {
        lariTime = stoi(input); // Mengubah nilai input string menjadi integer
    }

    cout << "Masukkan lama waktu olahraga push-up (dalam menit): ";
    getline(cin, input);
    if (!input.empty()) {
        pushUpTime = stoi(input); // Mengubah nilai input string menjadi integer
    }

    cout << "Masukkan lama waktu olahraga plank (dalam menit): ";
    getline(cin, input);
    if (!input.empty()) {
        plankTime = stoi(input); // Mengubah nilai input string menjadi integer
    }

    // Hitung jumlah kalori yang terbakar
    int kaloriLari = 0, kaloriPushup = 0, kaloriPlank = 0;
    if (lariTime > 0) {
        kaloriLari = lariTime * KALORI_LARI / 5; // Hitung kalori yang terbakar dari lari
        cout << "- Olahraga lari: " << kaloriLari << " kalori" << endl;
    }
    if (pushUpTime > 0) {
        kaloriPushup = pushUpTime * KALORI_PUSHUP / 30; // Hitung kalori yang terbakar dari push-up
        cout << "- Olahraga push-up: " << kaloriPushup << " kalori" << endl;
    }
    if (plankTime > 0) {
        kaloriPlank = plankTime * KALORI_PLANK; // Hitung kalori yang terbakar dari plank
        cout << "- Olahraga plank: " << kaloriPlank << " kalori" << endl;
    }

    // Output total jumlah kalori yang terbakar
    int totalKalori = kaloriLari + kaloriPushup + kaloriPlank;
    cout << "Total kalori yang terbakar: " << totalKalori << " kalori" << endl;

    return 0;
}
