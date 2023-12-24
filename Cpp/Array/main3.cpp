#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string grade [3][3][4] = {
                                {
                                    {"A", "B", "C", "D"},
                                    {"E", "F", "G", "H"},
                                    {"I", "J", "K", "L"}
                                },
                                {
                                    {"M", "N", "O", "P"},
                                    {"E", "F", "G", "H"},
                                    {"I", "J", "K", "L"}
                                },  
                                {
                                    {"Q", "R", "S", "T"},
                                    {"E", "F", "G", "H"},
                                    {"I", "J", "K", "L"}
                                }  
                             };
    for (int i = 0; i < 3; i++)
    {
                cout << endl;
        for (int j = 0; j < 3; j++)
        {
                cout << endl;
            for (int k = 0; k < 4; k++)
            {
                cout << grade[i][j][k] << " ";
            }
            
        }
        
    }
    
    return 0;
}
