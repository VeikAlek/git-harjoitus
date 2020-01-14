#pragma once

class Vahenna {
public:
	Vahenna(); 						//oletusrakentaja
	Vahenna(int a, int b);			//parametrin rakentaja
	Vahenna(const Vahenna& pvm);	//kopiorakentaja
	~Vahenna();						//parametrin purkaja
	int vahenna();
private:

};
