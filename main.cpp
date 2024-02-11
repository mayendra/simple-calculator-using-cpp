#include <iostream>
using namespace std;

int main() {
	float a,b,hasil;
	char aritmatika;

	//mengambil input dari user
	cout << "masukan angka pertama : ";
	cin >> a;
	cout << "pilih operator + - / * : ";
	cin >> aritmatika;
	cout << "masukan angka kedua : ";
	cin >> b;

	// kondisi menggunakan switch case 
	switch (aritmatika) {
	case '+':
		hasil = a + b;
		break;
	case '-':
		hasil = a - b;
		break;
	case '/' :
		hasil = a / b;
		break;
	case '*':
		hasil = a * b;
		break;
	default :
		cout << "input salah";
	}
	

	//output
	cout << "hasil "<< a << aritmatika << b <<" adalah " << hasil << endl;

	cin.get();
	return 0;

}