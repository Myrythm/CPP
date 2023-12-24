#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream file;
    string data;

    file.open("buah.txt");
    char text;
    while (!file.eof())
    {
        file.get(text);
        cout << text;
    }
    

    file.close();

    cin.get();
    return 0;
}
