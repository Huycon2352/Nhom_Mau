#include "Mau_B.h"
bool Mau_B::KN_A() {
	return false;
}
bool Mau_B::KN_B() {
	return true;
}
bool Mau_B::KTDT(NhomMau* Cha, NhomMau* Me) {
	return Cha->KN_B() || Me->KN_B();
}
bool Mau_B::KtraNhan(NhomMau* NguoiCho) {
	if (NhomMau::KtraNhan(NguoiCho))
		if (!NguoiCho->KN_A()) return true;
	return false;
}
