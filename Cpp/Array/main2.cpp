#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string grade[3][4] = {
                            {"A", "B", "C", "D"},
                            {"E", "F", "G", "H"}, 
                            {"I", "J", "K", "L"}
                         };

    for (int i = 0 ; i < 3; i++)
    {
        cout <<  endl;

        for (int j = 0; j < 4; j++)
        {
            cout <<  grade[i][j] << " ";       
        }
        
    }
           
    
    return 0;
}
