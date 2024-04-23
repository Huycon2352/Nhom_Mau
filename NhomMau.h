#pragma 
#include <iostream>
using namespace std;
class NhomMau
{
private:
	bool RH; // 1== RH+    0==RH-
public:
	virtual bool KTDT(NhomMau*, NhomMau*) = 0;
	virtual bool KtraNhan(NhomMau*);
	virtual bool KN_A() = 0;
	virtual bool KN_B() = 0;
	bool get_RH();
};




