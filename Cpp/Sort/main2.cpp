#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    //selection sort
    int temp;
    int arr[8][8] =  {
                     {2, 8, 5, 3, 9, 4, 1, 2},
                     {17, 21, 7, 98, 32, 12, 32, 88},
                     {12, 28, 15, 23, 39, 14, 21, 12},
                     {12, 18, 25, 13, 29, 24, 21, 42},
                     {21, 18, 25, 32, 91, 42, 11, 12},
                     {23, 28, 15, 23, 19, 24, 11, 12},
                     {22, 28, 15, 23, 292, 41, 121, 22},
                     {211, 28, 85, 93, 97, 46, 41, 62}};

for (int i = 0; i < 8; i++)
    {
        int min = i;
        for (int j = i+1; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                int min2 = k;
                for (int l = 0; l < k+1; l++)
                {
                    if (arr[j] < arr[min] && arr[k] < arr[min2] )
                    {
                        min = j;    
                        min2 = l;           
                    }   
        temp = arr[min][min2];
        arr[min][min2] = arr[i][k];
        arr[i][k] = temp; 
                }

                
            }
        
        }
       
    }
    
    for (int a = 0; a < 8; a++)
    {
        cout << endl;
        for (int b = 0; b < 8; b++)
        {
         cout << arr[a][b] << " ";
        }
        
    }
                    

/*
    int 8 = 8;
    int temp;

    for (int i = 0; i < 8; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min] )
            {
                min = j;               
            }   
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; 
       
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    */

    
    cin.get();
    return 0;
}


