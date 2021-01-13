#include <iostream>
using namespace std;

int main(){
	float x, y;
	
	cout << " Mencerminkan sebuah titik terhadap sumbu x, dan sumbu y"<<endl;
	cout << endl;
	cout << " Masukan nilai sumbu X : ";
	cin >> x;
	cout << " Masukan nilai sumbu Y : ";
	cin >> y;
	cout << endl;
	cout << " Hasil pencerminan sumbu X adalah : " << x << ", " << -y;
	cout << endl;
	cout << " Hasil pencerminan sumbu Y adalah : " << -x << ", " << y;
	
	return 0;
}
