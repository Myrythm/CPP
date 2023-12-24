#include <iostream>
using namespace std;

struct buku{
    int tahunTerbit;
    string judul, pengarang;

    buku *next;

};
    buku *head, *tail, *cur, *newNode, *del;


//fungsi create
void create(string judul, string pengarang, int tahunTerbit){

    head = new buku();

    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tahunTerbit;
    head->next = NULL;
    tail = head;
}

//fungsi print 
void print(){
    cur = head;
    while (cur != NULL)
    {
        cout << "Judul Buku: " << cur->judul << endl;
        cout << "Pengarang: " << cur->pengarang << endl;
        cout << "Tahun Terbit: " << cur->tahunTerbit << endl;
        cout << endl;

        cur = cur->next;
    }
}

void addFirst(string judul, string pengarang, int tahunTerbit){
     newNode = new buku();

    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tahunTerbit;
    newNode->next = head;
    head = newNode;
}

void addLast(string judul, string pengarang, int tahunTerbit){
     newNode = new buku();

    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tahunTerbit;
    newNode->next = NULL;
    tail->next = newNode;
    head = newNode;
}

void deleteFirst(){
    del = head;
    head = head-> next;
    delete del;
}

void deleteLast(){
    del = tail;
    cur = head;
    while (cur->next != tail)
    {
        cur = cur-> next;
    }
    tail = cur;
    tail->next = NULL;

    delete del;
    
}

void editFirst(string judul, string pengarang, int tahunTerbit){
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tahunTerbit;
}

void editLast(string judul, string pengarang, int tahunTerbit){
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunTerbit = tahunTerbit;
}


int main(int argc, char const *argv[])
{
    create("Dipikir-pikir malah kepikiran", "Aristoteles", 1870);
    addLast("", "Aristoteles", 1870);
    addFirst("Skuyliving", "Rehan Batagor", 2020);
    print();

   
    

    cin.get();
    return 0;
}
