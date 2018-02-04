#include <iostream>

#include <vector>

using namespace std;

//Напишите программу находящую в массиве сумму элементов делящихся либо

// на 72 либо на 27(не вместе).

int main() {

int k=0, x=0;

int n;

cin >> n;

vector <int> a(n);

for(int i=0; i<n; i++) {

cin >> a[i];

if(a[i] % 216 == 0) {

x++;

} else {

if(a[i]%27==0 || a[i]%72==0) {

k += a[i];

} else {

x++;

}}} cout << k;

return 0;

} 
