#include <iostream>
using namespace std;
void enqueue (string antrian);
void display();
void dequeue();
void count();
void destroy();
bool isFull();
bool isEmpty();

int maksArray = 5, front = 0, back = 0;
string ruangAntrian[5];

int main(int argc, char const *argv[])
{
    enqueue("Reza");
    enqueue("Yuna");
    enqueue("Yoga");
    enqueue("Andi");
    enqueue("Emi");
    enqueue("Emi");
    enqueue("Emi");
    
    destroy();
    display();
    count();
    
    
    
    
    


    cin.get();
    return 0;
}

void enqueue (string antrian){
    
    ruangAntrian[back] = antrian;
    back++;   
    
}

void display(){
    if(isEmpty()){
        for (int i = 0; i < maksArray; i++)
        {
        cout << i+1 << ". Antrian Kosong"  << endl;
        }       
        
    }
    

    else{
    
    for (int i = 0; i < maksArray; i++)
    {
        if (ruangAntrian[i] == "")
        {
            /* code */
         cout << i+1 << ". Antrian Kosong"  << endl;
        }else{

         cout << i+1 << ". " << ruangAntrian[i] << endl;
        }
    }
    }
    
}

bool isFull(){
    if(back = maksArray)
{
    return true;
}
else{
    return false;
}
}

bool isEmpty(){
    if(back == 0)
{
    return true;
}
else{
    return false;
}
}

void dequeue(){
    if(isEmpty()){
        cout << "Antrian Kosong" << endl;
    }
    else{
    for (int i = front; i < back; i++)
    {
        ruangAntrian[i] = ruangAntrian[i+1];
    }
        back--;
    }
    
}

void count(){
    
    
        cout << "Jumlah data saat ini: " << back << endl;
    }


void destroy(){
    for (int i = 0; i < maksArray; i++)
    {
        if (back >= 1)
            {
            ruangAntrian[i] = "";
            back --;
            }
        else if (back == 0){
            ruangAntrian[i] = "";
        }
        
    }
    
}

