#include <iostream>

using namespace std;

//Напишите программу находящую минимальную сумму пары элементов массива

// отстоящих друг от друга не менее чем на 4 элемента(первый и пятый элемент

// могут подходить, а первый и третий - нет). Эффективность в данной программе

// не приоритетна.

int main(){

int n, k= 0;

cin >> n;

int a[n];

if (n < 5){

cout << "wrong data";

} else {

for(int x=0; x<n; x++) {

cin >> a[x];

k = a[0] + a[4];

for (int i = 0; i < n - 4; i++){

for (int j = i + 4; j < n; j++){

if (k > a[i] + a[j])

k = a[i] + a[j];

}}}

cout << k;

}

return 0;

} 
