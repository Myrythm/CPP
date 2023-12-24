#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nilai[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < sizeof(nilai) / sizeof(int); i++){
        cout << nilai[i] << endl;
    }

    

    return 0;
}

