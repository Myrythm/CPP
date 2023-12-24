#include <iostream>
using namespace std; 

struct tanggal
{
    int hari;
    int bulan;
    int tahun;
};

struct alamat
{
    string jalan;
    string kota;
};

struct
{
    string nama;
    struct tanggal masuk;
    struct alamat rumah;
    int gaji;

}pegawai = {"Evan", 17, 7, 2017, "Jalan Gatot Subroto No. 17", " Kota Bandung", 15000000};


int main(int argc, char const *argv[])
{
    cout << "Nama Pegawai: " << pegawai.nama;
    cout << endl;
    cout << "Tanggal Masuk: " << pegawai.masuk.hari << pegawai.masuk.bulan << pegawai.masuk.tahun; 
    cout << endl;
    cout << "Alamat Rumah: " << pegawai.rumah.jalan << pegawai.rumah.kota;
    cout << endl;
    cout << "Gaji Pokok: RP. " << pegawai.gaji;
    cout << endl;
    
    cin.get();
    return 0;
}
