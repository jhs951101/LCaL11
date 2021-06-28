#pragma once

class T_FLIPFLOP
{
public:
	T_FLIPFLOP();
	void setInput(int t, int cp);
	void processing();
	void print();

private:
	unsigned short CP;
	unsigned short J;
	unsigned short K;
	unsigned short Q;
	unsigned short not_Q;
	unsigned short T;
};