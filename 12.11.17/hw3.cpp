#include <iostream>
#include <string>
using namespace std;
 //Напишите программу, которая находит во входном потоке простые числа. Входной поток заканчивается символом ‘!’.

 
int powerOfTen(int n) {
	int temp = 1;
	for (int i = 0; i < n; ++i) {
		temp *= 10;
	}
	return temp;
}
 
bool Numb(string s, int & n) {
	n = 0;
	for (int i = s.size() - 1; i >= 0; --i) {
		auto c = s[i];
		switch (c) {
		case '0' :
			break;
		case '1' :
			n += powerOfTen(i);
			break;
		case '2' :
			n += 2 * powerOfTen(i);
			break;
		case '3' :
			n += 3 * powerOfTen(i);
			break;
		case '4' :
			n += 4 * powerOfTen(i);
			break;
		case '5' :
			n += 5 * powerOfTen(i);
			break;
		case '6' :
			n += 6 * powerOfTen(i);
			break;
		case '7' :
			n += 7 * powerOfTen(i);
			break;
		case '8' :
			n += 8 * powerOfTen(i);
			break;
		case '9' :
			n += 9 * powerOfTen(i);
			break;
		default :
			return false;
		}
	}
	return true;
}
 
 
 
bool Prime(int k ) {
	for (int j = 2; j * j <= k; ++j) {
		if (k % j == 0) return false;
	}
	return true;
}
 
 
 
 
 
int main() {
	string c;
	getline(cin, c);
	while (c != "!") {
		int a;
		if (Numb(c, a)) {
			if (a == 1) {
				cout << "1: Unit";
			} else if (a <= 0) {
				cout << a << ": Not natural";
			} else if (Prime(a)) {
				cout << a << ": Prime";
			} else {
				cout << a << ": Composite";
			}
		} else {
			cout << c << ": Not a number";
		}
		cout << endl;
		getline(cin, c);
	}
 
	return 0;
}
