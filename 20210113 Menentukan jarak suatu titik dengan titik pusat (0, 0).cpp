#include <iostream>
using namespace std;

int main(){
	float x, y;
	
	cout << " Menentukan jarak suatu titik dengan titik pusat (x, y)"<<endl;
	cout << endl;
	cout << " Masukan nilai X : ";
	cin >> x;
	cout << " Masukan nilai Y : ";
	cin >> y;
	
	x = x*x;
	y = y*y;
	
	cout << " Jaraknya dari " << x << " dan " << y << " adalah : " << x+y;
	
	return 0;
}
