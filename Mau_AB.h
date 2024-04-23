#pragma once
#include "NhomMau.h"
class Mau_AB :public NhomMau 
{
public:
	bool KTDT(NhomMau*, NhomMau*);
	bool KtraNhan(NhomMau*);
	bool KN_A();
	bool KN_B();
};
