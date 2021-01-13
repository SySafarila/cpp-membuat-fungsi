#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	float x,y;
	cout<<" Menentukan Kuadran "<<endl;
	cout<<endl;

	cout<<" Masukkan Nilai x : ";
	cin>>x;
	cout<<endl;

	cout<<" Masukkan Nilai y : ";
	cin>>y;
	cout<<""<<endl;

	cout<<" Posisi Titik Berada di ";
	
	if (x>=0 && y>=0){
		cout<<" Kuadran 1"<<endl;
	}
	else if(x<0 && y>=0){
		cout<<" Kuadran 2"<<endl;
	}
	else if (x<0 && y<0){
		cout<<" Kuadran 3"<<endl;
	}
	else if(x>=0 && y<0){
		cout<<" Kuadran 4"<<endl;
	}

	//getch();
	return 0;
}
