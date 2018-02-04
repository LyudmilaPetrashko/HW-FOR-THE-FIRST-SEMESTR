#include <iostream>
#include <algorithm>
using namespace std;
//Напишите программу, которая удаляет из массива все простые числа встречающиеся больше одного раза.


void removeFromArray(int x, int * arr, int size) {
	for (int i = x; i < size; ++i) {
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = 0;
}
 
bool Prime(int h) {
	if (h <= 1) return false;
	for (int j = 2; j * j <= h; ++j) {
		if (h % j == 0) {
			return false;
		}
	}
	return true;
}
 

 
void delete_annoying_primes(int * arr, int & size) {
	for (int i = 0; i < size; ++i) {
		if (!Prime(arr[i])) continue;
		int c = arr[i];
		bool f = false;
		for (int j = 0; j < size; ++j) {
			if (j != i && arr[j] == arr[i]) {
				removeFromArray(j--, arr, size--);
				f = true;
			}
		}
		if (f) {
			removeFromArray(i--, arr, size--);
		}
	}
}
 
int main() {
	int k;
	cin >> k;
	int arr[k];
	for (int j = 0; j < k; ++j) {
		cin >> arr[j];
	}
 
	delete_annoying_primes(arr, k);
 
	for (int i = 0; i < k; ++i) {
		cout << arr[i] << ' ';
	}
	cout << endl;
 
	return 0;
}
