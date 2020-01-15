#include<iostream>
#include "yhteen.h"
#include "vahenna.h"
using std::cout;

int main() {
	cout << "Laskin V2: yhteen- tai vahennyslasku! \n ------------------------------ \n";
	Yhteen x;
	x.yhteenlaske();
	Vahenna y;
	y.vahenna();

	return 0;
}