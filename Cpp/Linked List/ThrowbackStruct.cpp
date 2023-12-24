#include <iostream>
using namespace std;

struct persegipanjang{
    int panjang, lebar, luas;

};

int main(int argc, char const *argv[])
{

    persegipanjang hitung;

    cout << "Masukan panjang: ";
    cin >> hitung.panjang;
    cout << "Masukan lebar: ";
    cin >> hitung.lebar;
    hitung.luas = hitung.panjang * hitung.lebar;
    cout << "Luas Persegi Panjang: "<< hitung.luas << endl;





    cin.get();
    return 0;
}
