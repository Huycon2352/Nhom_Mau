
#include "Mau_A.h"
#include "Mau_B.h"
#include "Mau_AB.h"
#include "Mau_O.h"
void NhapLoai(int loai,NhomMau *&Nguoi) {
	if (loai == 1) Nguoi = new Mau_A;
	else if (loai == 2) Nguoi = new Mau_B;
	else if (loai == 3) Nguoi= new Mau_AB;
	else if (loai == 4) Nguoi= new Mau_O;
	
}

int main() {
	// Task 1
	int n;
	cout << "Nhap so nguoi :";
	cin >> n;
	NhomMau** Nguoi= new NhomMau*[n];
	cout << "Loai 1_A  Loai 2_B  Loai 3_AB  Loai 4_O\n";
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Moi nhap thong tin cho nguoi thu " << i+1 << "\nLoai mau: ";
		cin >> loai;
		if (loai > 4 || loai < 1) {
			i--;
			cout << "Nhap lai\n";
			continue;
		}
		NhapLoai(loai,Nguoi[i]);
		cout << "Nhap loai RH : ";Nguoi[i]->set_RH();
	}

	// Task 2
	NhomMau* Cha=nullptr, * Me=nullptr, * Con=nullptr;
	cout << "Nhap Mau Cha,Me,con lan luot :\n";
	for (int i = 0;i < 3; i++)
	{
		cin >> loai;
		if (loai > 4 || loai < 1) {
			i--;
			cout << "Nhap lai\n";
			continue;
		}

		switch (i)
		{
		case 0 :
			NhapLoai(loai, Cha);
			break;
		case 1:
			NhapLoai(loai, Me);
			break;
		case 2:
			NhapLoai(loai, Con);
			break;
		default:
			break;
		}
	} 
	if (Con->KTDT(Cha, Me)) cout << "Dung di truyen\n";
	else cout << "Con ai roi\n";
	
	// Task 3
	int x;
	cout << "Nhap nguoi nhan, Nguoi thu "; cin >> x;
	cout << "Cac Nguoi Co The Cho Nguoi Thu " << x << " Mau Lan Luot La: ";
	for (int i = 0;i < n;i++) {
		if (i == x-1) continue;
		if (Nguoi[x-1]->KtraNhan(Nguoi[i])) cout << i + 1 << ' ';
	}

	system("pause");
}
