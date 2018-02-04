#include <iostream>
#include <cmath>
 
 //Напишите программу, которая выводит все натуральные числа-палиндромы длины n, делящиеся на 9, в порядке возрастания.

 
int Rev(long long v) {
	long long r(0), t = v;
	while (t != 0) {
		r = r * 10 + t % 10;
		t /= 10;
	}
	return r;
}
 
void print_palindrom(long long k) {
	if (k == 1) std::cout << 9;
	else if (k % 2) {
		long long t = (long long)pow(10, k / 2 - 1);
		for (int c = t; c < 10 * t; c++) {
			long long a = 2 * (9 - c % 9) % 9;
			long long b = Rev(c);
			std::cout << 100 * t * c + 10 * t * a + b << " ";
			if (a == 0) std::cout << 100 * t * c + 90 * t + b << " ";
		}
	}
	else {
		long long t = (long long)pow(10, k / 2 - 1);
		for (long long c = t + 8; c < 10 * t; c += 9) {
			std::cout << 10 * t * c + Rev(c) << " ";
		}
	}
}
 
int main() {
	long long n;
	std::cin >> n;
	print_palindrom(n);
	return 0;
}
