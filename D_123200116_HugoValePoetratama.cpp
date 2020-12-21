#include <iostream>
using namespace std;

void a();
float luas(int x);
float kel(int y);
float vol(int a, int b);


float luas(int x){
	float luas;
	luas = 3.14 * x * x;
	return luas;
}
float kel(int y){
	float luas1;
	luas1 = 3.14 * 2 * y;
	return luas1;
}
float vol(int a, int b){
	float luas2;
	luas2 = 3.14 * a * a * b;
	return luas2;
}

int main()
{
	string pil;
	int jr, tg;
	short pilih;

	do{
	cout << "Hitung Lingkaran "; a();
	cout << " 1. Luas Lingkaran " << endl;
	cout << " 2. Keliling Lingkaran " << endl;
	cout << " 3. Volume Tabung " << endl;
	cout << "Pilih : "; cin >> pilih;

	switch(pilih){
		case 1 :
			cout << "Jari - jari	: "; cin >> jr;
			cout << "Luas Lingkaran adalah " << luas(jr) << endl;
			break;

		case 2 :
			cout << "Jari jari 		: "; cin >> jr;
			cout << "Keliling Lingkaran adalah " << kel(jr) << endl;
			break;

		case 3 :
			cout << "Jari - jari 	: "; cin >> jr;
			cout << "Tinggi 		: "; cin >> tg;
			cout << "Volume Tabung adalah " << vol(jr, tg) << endl;
			break;
	}
	cin.ignore();
	cout << "Ulangi program? (y/n) "; cin >> pil;
	cout << endl;

	}while(pil == "y" || pil == "Y");
	cout << "Program selesai, Terima kasih :)" << endl;
	system("pause");
	return 0;
}

void a(){
	cout << "==========" << endl;
}


