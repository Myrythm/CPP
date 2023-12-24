/*

Nama: Muhammad Azka Adhitama
NIM: 2109981
Mata Kuliah: Struktur Data dan Algoritma
Kelas: 3B Teknik Komputer

*/

#include <iostream>
using namespace std;

        

void pengurutan(int arr[8][8]);
void genap(int arr[8][8]);
void ganjil(int arr[8][8]);


int main(int argc, char const *argv[])
{
    int arr[8][8] = {
                            {3, 2, 3, 5, 5, 2, 4, 4},
                            {2, 12, 1, 6, 22, 4, 4, 55},
                            {3, 23, 2, 55, 33, 123, 12, 66},
                            {4, 56, 33, 7, 55, 32, 15, 77},
                            {5, 7, 1, 88, 23, 25, 15, 8},
                            {10, 8, 2, 9, 14, 6, 23, 23},
                            {12, 9, 4, 88, 57, 3, 45, 14},
                            {33, 80, 5, 9, 2, 4, 56, 1}                     
         
                         };


pengurutan(arr);
        cout << "Output: ";
     for (int i = 0; i < 8; i++)
    {
     cout << endl;
        for (int j = 0; j < 8; j++)
    {
        cout <<  arr[i][j] << " ";
    }
    
    }
cout << endl;
cout << "=============================" << endl;

cout << endl;

    genap(arr);

cout << endl;
cout << "=============================" << endl;
cout << endl;
    ganjil(arr);





    return 0;
}

void pengurutan(int arr[8][8]){

    for (int k = 0; k < 8; k++) {
		for (int i = 0; i < 8 - 1; i++) {
			for (int j = (8 - 1); j > i; j--) {
				if (arr[k][j - 1] > arr[k][j]) {
					int temp = arr[k][j - 1];
					arr[k][j - 1] = arr[k][j];
					arr[k][j] = temp;
				}
			}
		}
	}
	for (int k = 0; k < 8; k++) {
		for (int i = 0; i < 8 - 1; i++) {
			for (int j = (8 - 1); j > i; j--) {
				if (arr[j - 1][k] > arr[j][k]) {
					int temp = arr[j - 1][k];
					arr[j - 1][k] = arr[j][k];
					arr[j][k] = temp;
				}
			}
		}
	}
}

        
void genap(int arr[8][8]){
    cout << "Genap: ";
    for (int i = 0; i < 8; i++)
    {
        cout << endl;
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] %2 == 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

void ganjil(int arr[8][8]){
    cout << "Ganjil: ";
    for (int i = 0; i < 8; i++)
    {
        cout << endl;
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] %2 != 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
        
            
    




    
