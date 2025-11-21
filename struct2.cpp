#include <iostream>

using namespace std;

struct siswa {
    string nama;
    string sekolah;
    unsigned int nis;
};

int main()
{
    struct siswa siswa2;

    cout << "==++ pendaftaran siswa baru ++==" << endl;
    cout << "nama: ";
    getline(cin,siswa2.nama);

    cout << "sekolah: ";
    getline(cin,siswa2.sekolah);

    cout << "nis: ";
    cin >> siswa2.nis;

    cout << endl;

    cout << siswa2.nama << " bersekolah di " << siswa2.sekolah << endl;
    cout << "nomor induk siswanya " << siswa2.nis << endl;

    return 0;
}
