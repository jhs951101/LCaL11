#include "t flipflop.h"
#include "nor.h"
#include "and.h"
#include "not.h"
#include<iostream>

using namespace std;

T_FLIPFLOP::T_FLIPFLOP(){
	this->Q = 0;
}

void T_FLIPFLOP::setInput(int t, int cp){
	this->T = t;
	this->CP = cp;

	this->processing();
}

void T_FLIPFLOP::processing(){

	gate_NOT not;
	gate_AND and;
	gate_NOR nor;
	
	not.setInput(this->Q);
	this->not_Q = not.getOutput();

	this->J = this->T;

	and.setInput(this->J, this->CP);
	and.setInput( and.getOutput() , this->not_Q );
	unsigned short value2 = and.getOutput();

	nor.setInput(value2, this->Q);
	this->not_Q = nor.getOutput();

	this->K = this->T;

	and.setInput(this->K, this->CP);
	and.setInput( and.getOutput() , this->Q );
	unsigned short value1 = and.getOutput();

	nor.setInput(value1, this->not_Q);
	this->Q = nor.getOutput();

}

void T_FLIPFLOP::print(){
	cout << "Q(t+1): " << this->Q << endl;
	cout << endl;
}