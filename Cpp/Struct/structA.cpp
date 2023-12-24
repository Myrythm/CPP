#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    int nim;
    string prodi;
    string univ;

};
int main(int argc, char const *argv[])
{
    mahasiswa mhs;
    mhs.nama = "Muhammad Azka";
    mhs.nim = 2109981;
    mhs.prodi = "Teknik Komputer";
    mhs.univ = "Universitas Pendidikan Indonesia";

    cout << mhs.nama << endl;
    cout << mhs.nim << endl;
    cout << mhs.prodi << endl;
    cout << mhs.univ << endl;

    return 0;
}
