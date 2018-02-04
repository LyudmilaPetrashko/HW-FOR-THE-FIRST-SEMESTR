#include <iostream>
#include <algorithm>
using namespace std;
//Напишите программу, которая удаляет из массива все простые числа встречающиеся больше одного раза.




void RemoveFromArray(int x, int * arr, int size) {
	for (int i = x; i < size; ++i) {
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = 0;
}

bool Prime(int k) {
	if (k <= 1) return false;
	for (int j = 2; j * j <= k; ++j) {
		if (k % j == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int size = n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < size; ++i) {
		if (!Prime(arr[i])) continue;
		int c = arr[i];
		bool f = false;
		for (int j = 0; j < size; ++j) {
			if (j != i && arr[j] == arr[i]) {
				RemoveFromArray(j--, arr, size--);
				f = true;
			}
		}
		if (f) {
			RemoveFromArray(i--, arr, size--);
		}
	}
	
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	
	return 0;
}
