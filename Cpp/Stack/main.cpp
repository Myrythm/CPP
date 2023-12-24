#include <iostream>
using namespace std;


        int maks = 5;
        string arrBook[5];
        int top = 0;

        bool isFull(){
            if(top == maks){
                return true;
            }else
            {
                return false;
            }
            }
    

    bool isEmpty(){
            if(top == 0){
                return true;
            }else
            {
                return false;
            }
            
    }


    void PUSH(string data){
        if (isFull())
        {
            cout << "data penuh" << endl;
        }else
        {
            arrBook[top] = data;
            top++;
        }
        
    }      

    void POP(){
        if (isEmpty())
        {
            cout << "data penuh" << endl;
        }else{
            arrBook[top-1] = "";
            top--;
        }
        
    }   

    void display(){

         if (isFull())
        {
            cout << "data penuh" << endl;
        }else if (isEmpty())
        {
            cout << "data kosong" << endl;
        }else {
        for (int i = maks - 1; i >= 0; i--)
        {
            if (arrBook[i] != "")
            {
                cout << "data ke-" << i << ": " << arrBook[i] << endl;
            }
            
        }

        }
        
        
    }




int main(int argc, char const *argv[])
{
    

    PUSH("Bahasa Indonesia");
    PUSH("Bahasa Inggris");
    PUSH("Bahasa Inggris");
    PUSH("Bahasa Inggris");
    PUSH("Bahasa Inggris");

    POP();
    display();


        
    
    cin.get();
    return 0;
}

    


