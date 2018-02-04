#include <iostream>
using namespace std;

//Напишите программу заполняющую квадратный двумерный массив, как показано в примере. На главной диагонали стоят нули, а на остальных - удаление от главной диагонали.


void dig_trench(int ** arr, int s) {
		int c = 0;
		for (int i = 0; i < s; ++i) {
			for (int j = i; j > 0; --j) {
				arr[i][c++] = j;
			}
			for (int j = 0; j < s - i; ++j) {
				arr[i][c++] = j;
			}
		
			c = 0;
		}
}

int main() {
	int k;
	cin >> k;
	
	int ** Trench = new int *[k];
	Trench[0] = new int[k * k];
	for (int i = 1; i < k; ++i) {
		Trench[i] = Trench[i - 1] + k;
	}
	
	dig_trench(Trench, k);
	
	for (int a = 0; a < k; ++a) {
		for (int b = 0; b < k; ++b) {
			cout << Trench[a][b] << ' ';
		}
		cout << endl;
	}
	
	delete [] Trench[0];
	delete [] Trench;
	
	return 0;
}
