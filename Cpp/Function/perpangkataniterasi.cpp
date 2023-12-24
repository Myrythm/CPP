#include <iostream>
using namespace std;

int iterasi (int a, int b);

int main()
{
    int a,b;
    cout << "Masukan angka: ";
    cin >> a;
    cout << "Masukan pangkat: ";
    cin >> b;

    cout << "Hasil: " << iterasi(a,b);

    cin.get();
    return 0;
}


int iterasi(int a, int b){
    int hasil = a;
    
    if (b == 1)
    {
        return a;
    }
    else if (b == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= b; i++)
        {
            i++;
            return hasil = hasil * a;
        }
        
    }
}
    
    
    
