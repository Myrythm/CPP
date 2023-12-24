#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string name;
    int age;

   ofstream out;
   out.open("file.txt", ios:: out);

   
   cout << "Enter your name: "; 
   cin >> name;
   cin.ignore();

   out << name << endl;

   cout << "Enter your age: "; 
   cin >> age;
   cin.ignore();
   
   out << age << endl;
   out.close();

   ifstream in; 
   in.open("file.txt"); 
 
   cout << "Readfile" << endl; 
   in >> name; 

   cout << name << endl;
   
   in >> age; 
   cout << age << endl; 

   in.close();
   
    return 0;
}
