#include "Mau_A.h"
bool Mau_A::KN_A() {
	return true;
}
bool Mau_A::KN_B() {
	return false;
}
bool Mau_A::KTDT(NhomMau* Cha, NhomMau* Me) {
	return Cha->KN_A() || Me->KN_A();
}
bool Mau_A::KtraNhan(NhomMau* NguoiCho) {
	if (NhomMau::KtraNhan(NguoiCho)) 
		if (!NguoiCho->KN_B()) return true;
	return false;
	}