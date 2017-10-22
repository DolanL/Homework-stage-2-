#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>
using namespace std;
int check(char* x1) {
	int error;
	for (int i = 0; i < strlen(x1); i++) {
		if ((x1[i] != '1') && (x1[i] != '2') && (x1[i] != '3') && (x1[i] != '4') &&
		        (x1[i] != '5') && (x1[i] != '6') && (x1[i] != '7') && (x1[i] != '8') &&
		        (x1[i] != '9') && (x1[i] != '0'))
			error = 1;
	}
	if (error == 1) {
		cerr << "Wrong integer";
	}
	return error;
}
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
double div(double x, int y) {
	double rez;
	rez = x / y;
	return rez;
}
int mod(int x, int y) {
	cout << "Enter x value for the module" << endl;
	int m;
	cin >> m;
	return ((x - y) % m);
}
double pow(double x) {
	cout << "Enter x value for the power" << endl;
	char p[10];
	cin >> p;
	int error;
	double x1 = x;
	for (int i = 0; i < strlen(p); i++) {
		if ((p[i] != '1') && (p[i] != '2') && (p[i] != '3') && (p[i] != '4') &&
		        (p[i] != '5') && (p[i] != '6') && (p[i] != '7') && (p[i] != '8') &&
		        (p[i] != '9') && (p[i] != '0'))
			error = 1;
	}
	if (error == 1) {
		cerr << "Bad integer";
	} else {
		int p1 = atoi(p);
		if (p1 > 0) {
			while (p1 > 1) {
				x = x1 * x;
				p1--;
			}
		} else {
			if (p1 < 0) {
				x = 1 / x;
				while (p1 < -1) {
					x = x / x1;
					p1++;
				}
			} else
				x = 1;
		}
	}
	return x;
}
int rol(int x) {
	return (x << 1);
}
int ror(int x) {
	return (x >> 1);
}
int nott(int x) {
	return (!x);
}
int andd(int x, int y) {
	return (x & y);
}
int orr(int x, int y) {
	return (x | y);
}
int main() {
	while (1) {
		cout << endl
		     << "Select the operation [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
		char operand;
		cin >> operand;
		char x1[10];
		char y1[10];
		int x, y, error;
		switch (operand) {
			case '+':
				cout << "Enter the first figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << "Enter the second figure" << endl;
					cin >> y1;
					if (!check(y1)) {
						cout << add(atoi(x1), atoi(y1)) << endl;
					}
				}
				break;
			case '-':
				cout << "Enter the first figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << "Enter the second figure" << endl;
					cin >> y1;
					if (!check(y1)) {
						cout << sub(atoi(x1), atoi(y1)) << endl;
					}
				}
				break;
			case '*':
				cout << "Enter the first figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << "Enter the second figure" << endl;
					cin >> y1;
					if (!check(y1)) {
						cout << mul(atoi(x1), atoi(y1)) << endl;
					}
				}
				break;
			case '/':
				cout << "Enter the first figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << "Enter the second figure" << endl;
					cin >> y1;
					if (!check(y1)) {
						if (atoi(y1) != 0) {
							cout << div(double(atoi(x1)), atoi(y1)) << endl;
						} else
							cout << "Error.There are 0 in the denominator " << endl;
					}
				}
				break;
			case '%':
				cout << "Enter the first figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << "Enter the second figure" << endl;
					cin >> y1;
					if (!check(y1)) {
						cout << mod(atoi(x1), atoi(y1)) << endl;
					}
				}
				break;
			case '^':
				cout << "Enter x figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << pow((double)atoi(x1));
				}
				break;
			case '<':
				cout << "Enter x figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << rol(atoi(x1)) << endl;
				}
				break;
			case '>':
				cout << "Enter x figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << ror(atoi(x1)) << endl;
				}
				break;
			case '!':
				cout << "Enter x figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << nott(atoi(x1)) << endl;
				}
				break;
			case '&':
				cout << "Enter the first figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << "Enter the second figure" << endl;
					cin >> y1;
					if (!check(y1)) {
						cout << andd(atoi(x1), atoi(y1)) << endl;
					}
				}
				break;
			case '|':
				cout << "Enter the first figure" << endl;
				cin >> x1;
				if (!check(x1)) {
					cout << "Enter the second figure" << endl;
					cin >> y1;
					if (!check(y1)) {
						cout << orr(atoi(x1), atoi(y1)) << endl;
					}
				}
				break;
			default:
				cerr << "Error" << endl;
		}
	}
	return 0;
}
