#include <iostream>
using namespace std;

struct buku{
    int tahunTerbit;
    string judul, pengarang;

    buku *next;

};

int main(int argc, char const *argv[])
{

    buku *node1, *node2, *node3;

    node1 = new buku();
    node2 = new buku();
    node3 = new buku();

    //pengisian data pada node 1

    node1->judul = "Skuyliving";
    node1->pengarang = "Dis!";
    node1->tahunTerbit = 2022;
    node1->next = node2;

    node2->judul = "Dikasih cobaan malah dicobain";
    node2->pengarang = "Who Knows";
    node2->tahunTerbit = 2010;
    node2->next = node3;

    node3->judul = "Dipikir-pikir malah kepikiran";
    node3->pengarang = "People";
    node3->tahunTerbit = 2018;
    node3->next = NULL;
    
    //print single linked list

    buku *cur;
    cur = node1;
    while (cur != NULL)
    {
        cout << "Judul Buku: " << cur->judul << endl;
        cout << "Pengarang: " << cur->pengarang << endl;
        cout << "Tahun Terbit: " << cur->tahunTerbit << endl;
        cout << endl;

        cur = cur->next;
    }
    






    cin.get();
    return 0;
}
