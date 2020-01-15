#include<iostream>
#include "yhteen.h"
using std::cin;
using std::cout;

void Yhteen::yhteenlaske() {
	int a, b;
	cout << "Ensimmainen yhteenlaskettava luku: ";
	cin >> a;
	cout << "Toinen yhteenlaskettava luku: ";
	cin >> b;
	cout << "\n" << a << " + " << b << " on " << a + b << "\n";
}