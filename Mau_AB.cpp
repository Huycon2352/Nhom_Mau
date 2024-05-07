#include "Mau_AB.h"
bool Mau_AB::KN_A() {
	return true;
}
bool Mau_AB::KN_B() {
	return true;
}
bool Mau_AB::KTDT(NhomMau* Cha, NhomMau* Me) {
	if (Cha->KN_A() && Me->KN_B() || Cha->KN_B() && Me->KN_A()) return true;
	return false;
}
bool Mau_AB::KtraNhan(NhomMau* NguoiCho) {
	if (NhomMau::KtraNhan(NguoiCho)) {
		return true;
	}
	return false;
}
