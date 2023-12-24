#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream first ("contoh.txt");
    if (first.is_open())
    {
        first << "Hello world" << endl;
    }
    else
    {
        cout << "file tidak ditemukan" << endl;
    }
    
    first.close();

string text;

ifstream second("contoh.txt");

while (getline (second, text)) {
  cout << text;
}

second.close();
    
    return 0;
}
