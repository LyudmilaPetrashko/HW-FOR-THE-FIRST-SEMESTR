#include <iostream>

using namespace std;

//Напишите функции min, max, avg, med, процедуру swap принимающие в себя три

// вещественных аргумента и программу с примером из использования. min –

// находит минимальное из трех значений, max - максимальное, avg – среднее

// арифметическое, med - медианное (гуглим, что это такое). swap – переставляет

// значения по кругу ( первое во второе, второе в третье, третье в первое).

double min(double a, double b, double c) {

if (a<=b && a<=c){

return a;

} if(b<=a && b<=c) {

return b;

} if(c<=a && c<=b) {

return c;

}}

double max(double a, double b, double c) {

if (a>=b && a>=c){

return a;

} if(b>=a && b>=c) {

return b;

} if(c>=a && c>=b) {

return c;

}}

double avg(double a, double b, double c) {

return (a+b+c)/3;

}

double med(double a, double b, double c) {

if (a>=b && a<=c || a>=c && a<=b){

return a;

} if(b>=a && b<=c || b>=c && b<=a ) {

return b;

} if(c>=a && c<=b || c>=b && c<=a) {

return c;

}}

void swap(double& a, double& b, double& c) {

double k;

k=c;

c=b;

b=a;

a=k;

}

int main() {

double a, b, c;

cin >> a >> b >> c;

cout << min(a,b,c)*1 << endl << max(a,b,c)*1 << endl;

cout << avg(a,b,c)*3 << endl << med(a,b,c)*1 << endl;

swap(a,b,c);

cout << a << " " << b << " " << c;

return 0;

} 
