
#include <iostream>

using namespace std;

int maks = 5;
string aarBook[5];
int top = 0;


//fungsi memeriksa data apakah penuh ISFULL
bool isFull(){
	if(top==maks){
		return true;
	}
	else{
		return false;
	}
}

//fungsi memeriksa data apakah kosong ISEMPTY
bool isEmpty(){
	if(top==0){
		return true;
	}
	else{
		return false;
	}
}

//fungsi menambahkan data PUSH
void push(string data){
	if(isFull()){
		cout<<"Data Penuh"<<endl;
	}
	else{
		aarBook[top]=data;
		top++;
	}

}

//fungsi mengeluarkan data POP
void pop(){
	aarBook[top-1]="";
	top--;
}

//fungsi menampilkan data DISPLAY
void display(){
	if(isEmpty()){
		cout<<"Data Kosong"<<endl;
	}
	else
	{
		for(int i=maks-1;i>=0;i--){
			if(aarBook[i] != ""){	
			cout<<"Data ke-"<<i<<" "<<aarBook[i]<< endl;
			}
		}
		cout<<"========="<<endl;
	}
}

//fungsi mengintip data PEEK
void peek(int posisi){
	if(isEmpty()){
		cout<<"Data Kosong"<<endl;
	}
	else{
		cout<<"Data ke-"<<posisi<<" "<<aarBook[posisi]<<endl;
	}
}

//fungsi menghitung banyak data COUNT
int count(){
	if(isEmpty()){
		cout<<"Data Kosong"<<endl;
		return 0;
	}
	else{
		return top;
	}
}

//fungsi mengubah data pada posisi tertentu CHANGE
void change(string data, int posisi){
	if(isEmpty()){
		cout<<"Data Kosong"<<endl;
	}
	else{
		aarBook[posisi]=data;
	}	
}

//fungsi menghapus seluruh data DESTROY
void destroy(){
	if(isEmpty()){
		cout<<"Data Kosong"<<endl;
	}
	else{
		for(int i=maks;i>=0;i--){
			aarBook[i]="";
		}
	}
	top=0;	
}


int main()
{
	push("Bahasa Indonesia");
	push("PKN");
	push("IPA");
	push("Bahasa Inggris");
	push("IPS");
	display();
	cout<<"Banyak Data = "<<count()<<endl;
	change("Baris Data",3);
	display();
	destroy();
	display();
	return 0;
}
