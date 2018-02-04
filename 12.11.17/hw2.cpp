#include <iostream>
using namespace std;
//Напишите программу, которая подсчитывает, сколько раз в строке встретился символ ‘w’

 
int main() {
	int n = 0;
	char i;
	while (cin >> i) {
		if (i == 'w') {
			++n;
		}
	}
	cout << n;
	return 0;
}
