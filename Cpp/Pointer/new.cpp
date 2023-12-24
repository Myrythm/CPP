#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string food = "Pizza";
    string* ptr = &food;
    cout << food << endl;
    cout << &food << endl; // Output the memory address of food (0x6dfed4)
    cout << ptr << endl; 
    cout << *ptr << endl; 


    return 0;
}
