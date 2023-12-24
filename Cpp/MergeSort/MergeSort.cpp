#include <iostream>

using namespace std;

void mergeSort(int arr[], int l, int m, int r, int size);
void divider(int arr[], int l, int r, int size);

int main()
{
  int size;

  cout << "Masukkan berapa jumlah angka yang ingin diurutkan menggunakan Merge Sort: ";
  cin >> size;

  int myarr[size];
  
  cout << "\n" << "Masukkan " << size << " angka yang ingin diurutkan menggunakan Merge Sort: " << "\n";
  for (int i = 0; i < size; i++)
  {
    cin >> myarr[i];
  }

  cout << "\n" << "Bentuk array sebelum diurutkan menggunakan Merge Sort: " << "\n";
  for (int i = 0; i < size; i++)
  {
    cout << myarr[i] << " ";
  }
  cout << "\n";

  divider(myarr, 0, (size - 1), size);

  cout << "\n" << "Bentuk array setelah diurutkan menggunakan Merge Sort: " << "\n";
  for (int i = 0; i < size; i++)
  {
    cout << myarr[i] << " ";
  }
  cout << "\n";

  cin.get();
  return 0;
}

void mergeSort(int arr[], int l, int m, int r, int size)
{
  //Penunjuk indeks array
  int i = l;
  int j = m + 1;
  int k = l;

  //Temporary array untuk menyimpan hasil perbandingan saat pengurutan
  int temp[size];

  while (i <= m && j <= r)
  {
    if (arr[i] <= arr[j])
    {
      temp[k] = arr[i];
      i++;
      k++;
    }
    else
    {
      temp[k] = arr[j];
      j++;
      k++;
    }
  }

  while (i <= m)
  {
    temp[k] = arr[i];
    i++;
    k++;
  }

  while (j <= r)
  {
    temp[k] = arr[j];
    j++;
    k++;
  }

  //Memasukkan array yang sudah diurutkan di temporary array ke array asli di main
  for (int z = l; z <= r; z++)
  {
    arr[z] = temp[z];
  }
}

void divider(int arr[], int l, int r, int size)
{
  //Menemukan titik tengah paling mungkin dari Array
  //l = left
  //r = right
  //m = middle
  if (l < r)
  {
    int m = (l + r) / 2;
  
    divider(arr, l, m, size);
    divider(arr, m + 1, r, size);
    
    mergeSort(arr, l, m, r, size);
  }
}