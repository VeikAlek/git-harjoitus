#include<iostream>
#include "laskin.h"
using std::cin;
using std::cout;



void Laskin::laskinloop() {
	cout << "Laskin V3: toimenpiteet yhteen luokkaan! \n ------------------------------ \n";
	char toimenpide = 'a';
	while (toimenpide != 'X') {
		cout << " Valitse toimenpide: + - (X lopettaa laskimen)\n ------------------------------ \n";
		cin >> toimenpide;
		if (toimenpide == '+'){
			yhteenlaske();
		}
		else if (toimenpide == '-'){
			vahenna();
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
	int a, b;
	cout << "\n Yhteenlaskettava luku 1: ";
	cin >> a;
	cout << "\n Yhteenlaskettava luku 2: ";
	cin >> b;
	cout << "\n" << a << " + " << b << " on " << a + b << "\n";
}
void Laskin::vahenna() {
	int a, b;
	cout << "Vahennettava luku: ";
	cin >> a;
	cout << "Vahentava luku: ";
	cin >> b;
	cout << "\n" << a << " - " << b << " on " << a - b << "\n";
}