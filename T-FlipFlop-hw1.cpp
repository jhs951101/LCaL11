#include "t flipflop.h"
#include<iostream>

using namespace std;

int main(){

	T_FLIPFLOP t_flipflop;
	int t, cp;

	while(true){
		cout << "Input CP and T : ";
		cin >> cp >> t;

		t_flipflop.setInput(t, cp);
		t_flipflop.print();
	}

	return 0;
}