#include <iostream>
using namespace std;

int pangkat(int a, int b){
    int n = 1;
    if (b == 1)
    {
        return a;
    }
    else if (b == 0)
    {
       return n;
    }
    else
    {
        return a * pangkat(a,(b-1));
    }
        
}
int main()
{
    int a, b;
    cout << "Masukan angka: ";
    cin >> a;
    cout << "Masukan pangkat: ";
    cin >> b;

    cout << "hasil: " << pangkat(a, b);
    cin.get();
    return 0;
}
