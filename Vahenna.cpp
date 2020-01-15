#include<iostream>
#include "vahenna.h"
using std::cin;
using std::cout;

void Vahenna::vahenna() {
	int a, b;
	cout << "Vahennettava luku: ";
	cin >> a;
	cout << "Vahentava luku: ";
	cin >> b;
	cout << "\n" << a << " - " << b << " on " << a - b << "\n";
}