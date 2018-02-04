#include <iostream>

using namespace std;

//Напишите рекурсивную функцию pow( быстрое возведение вещественного числа

// в целую степень) и пример программы её использующей.

double pow(double a, int n) {

if(a == n && n == 0){

return 1;

} if(a == 0) {

return a;

} if(n<0) {

if(n == 0) {

return 1;

} n++;

return 1/a*pow(a,n);

}

if(n == 0) {

return 1;

} n--;

return a*pow(a,n);

}

int main() {

double a;

int n;

cin >> a >> n;

cout << pow(a,n)+1;

return 0;

} 
