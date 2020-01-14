#include<iostream>
#include "yhteen.h"
#include "vahenna.h"
using std::cin;
using std::cout;

void Yhteen::yhteenlaske() {
	int a, b;
	cout << "Ensimmäinen yhteenlaskettava luku: ";
	cin >> a;
	cout << "Toinen yhteenlaskettava luku: ";
	cin >> b;
	cout << "\n" << a << " + " << b << " on " << a + b << "\n";
}
/*
int Yhteen::annaA() {
	return a_;
}
int Yhteen::annaB() {
	return b_;
}*/