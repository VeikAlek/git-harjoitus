#include<iostream>
#include "laskin.h"
using std::cin;
using std::cout;

void Laskin::laskinloop() {
	cout << "Laskin \n ------------------------------ \n";
	char toimenpide = 'a';
	while (toimenpide != 'X') {
		cout << " Valitse toimenpide: + - * / (X lopettaa laskimen)\n ------------------------------ \n";
		cin >> toimenpide;
		if (toimenpide == '+'){
			yhteenlaske();
		}
		else if (toimenpide == '-'){
			vahenna();
		}
		else if (toimenpide == '*') {
			kerro();
		}
		else if (toimenpide == '/') {
			jaa();
		}
		else if (toimenpide == 'X' || toimenpide == 'x') {
			cout << " Lopetus.";
			break;
		}
		else {
			cout << " Virheellinen syotto. \n ------------------------------ \n";
		}
	}
}

void Laskin::yhteenlaske() {
	double a, b;
	cout << "\n 1. Yhteenlaskettava luku: ";
	cin >> a;
	cout << "\n 2. Yhteenlaskettava luku: ";
	cin >> b;
	cout << "\n" << a << " + " << b << " on " << a + b << "\n";
}
void Laskin::vahenna() {
	double a, b;
	cout << "\n Vahennettava luku: ";
	cin >> a;
	cout << "\n Vahentava luku: ";
	cin >> b;
	cout << "\n" << a << " - " << b << " on " << a - b << "\n";
}

void Laskin::kerro(){
	double a, b;
	cout << "\n 1. Kerrottava luku: ";
	cin >> a;
	cout << "\n 2. Kerrottava luku:";
	cin >> b;
	cout << "\n" << a << " * " << b << " on " << a * b << "\n";
}

void Laskin::jaa(){
	double a, b;
	cout << "\n Jaettava luku: ";
	cin >> a;
	cout << "\n Jakava luku: ";
	cin >> b;
	cout << "\n" << a << " / " << b << " on " << a / b << "\n";
}
