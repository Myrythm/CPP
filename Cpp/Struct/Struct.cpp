#include <iostream>
using namespace std;

struct mahasiswa{
    
    string nama;
    int nim;
   
};
int main(int argc, char const *argv[])
{
    mahasiswa mhs[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Nama: ";
        cin >> mhs[i].nama;
        cout << "NIM: ";
        cin >> mhs[i].nim;
        cout << endl;
    }
    
        
    for (int j = 0; j < 5; j++)
    {
        cout << "Nama " << mhs[j].nama << " dengan NIM " << mhs[j].nim << endl;
    }
    
    

    cin.get();
    return 0;
}
