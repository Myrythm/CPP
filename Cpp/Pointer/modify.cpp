#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string food = "Ayam Goreng";
    string *ptr = &food;

    cout << food << endl; // Output the value of food
    cout << &food << endl;
    cout << *ptr << endl;

    *ptr = "Fried Chicken";  // Change the value of the pointer
    cout << *ptr << endl; // Output the new value of the pointer 
    cout << food << endl; //Output the new value of the food variable

    return 0;
}
