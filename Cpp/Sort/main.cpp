#include <iostream>
using namespace std;

void pengurutan(int n, int arr[]);

int main(int argc, char const *argv[])
{
    int arr[5], n=5;
    
    
    //43215876
    cout << "Input number: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    pengurutan(n, arr);
    cout << "Output: ";
     for (int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }
        
        
    return 0;
}

void pengurutan(int n, int arr[]){

    int temp = 0;

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (arr[k] > arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
            
        }
        
    }   
        
    
}
