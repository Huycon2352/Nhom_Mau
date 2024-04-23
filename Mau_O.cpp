#include "Mau_O.h"
bool Mau_O::KN_A() {
	return false;
}
bool Mau_O::KN_A() {
	return false;
}
bool Mau_O::KTDT(NhomMau* Cha, NhomMau* Me) {
	if (Cha->KN_A() && Cha->KN_B() || Me->KN_A() && Me->KN_B()) return false;
	return true;
}
bool Mau_O::KtraNhan(NhomMau* NguoiCho) {
	if (NhomMau::KtraNhan(NguoiCho)) {
		if (NguoiCho->KN_A() || NguoiCho->KN_B()) return false;
		return true;
	}
}