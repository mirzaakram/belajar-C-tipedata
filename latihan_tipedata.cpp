//tugas tipe data biodata

#include <iostream>

using namespace std;

int main(){
    string nama;
    string jurusan;
    int umur;
    float tinggiBadan;

    cout << "masukkan nama: ";
    getline(cin, nama);

    cout << "masukkan jurusan: ";
    getline(cin, jurusan);

    cout << "masukkan umur: ";
    cin >> umur;

    cout << "masukkan tinggi badan: ";
    cin >> tinggiBadan;

    cout << endl;
    cout << "++== Biodata ==++" << endl;
    cout << "Nama         : " << nama << endl;
    cout << "jurusan      : " << jurusan << endl;
    cout << "umur         : " << umur << endl;
    cout << "Tinggi badan : " << tinggiBadan << "cm" << endl;

    return 0;
    //lanjutkan yang menghasilkan biodata input
    //dan hasil dari inputan
}
