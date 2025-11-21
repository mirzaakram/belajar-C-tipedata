#include <iostream>

using namespace std;

struct siswa {
    string nama;
    string jeniskelamin;
    unsigned int uangsaku;
};

int main()
{
    struct siswa siswa1;
    siswa1.nama = "mierza akram";
    siswa1.jeniskelamin = "laki-laki";
    siswa1.uangsaku = 25000;

    cout << siswa1.nama <<"jenis kelamin nya" << siswa1.jeniskelamin << endl;
    cout <<"diberi uang saku" << siswa1.uangsaku << "per hari" << endl;

    return 0;
}
