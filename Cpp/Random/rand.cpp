#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int random;
    string alfabet;
    srand(time(0));

    for (int i = 0; i <= 5; i++)
    {
       random = rand() % 26;
       alfabet = 'a' + random;
       cout << "[" << alfabet << "]";

    }
    
    return 0;
}
