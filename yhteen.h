#pragma once

class Yhteen {
public:
	Yhteen(); 						//oletusrakentaja
	Yhteen(int a, int b);			//parametrin rakentaja
	Yhteen(const Yhteen& pvm);		//kopiorakentaja
	~Yhteen();						//parametrin purkaja
	int yhteenlaske();
private:

};
