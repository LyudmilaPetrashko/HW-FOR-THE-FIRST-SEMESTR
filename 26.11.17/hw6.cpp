/*
Задано число n. Требуется найти число от 1 до n, включительно,
 которое имеет максимальное число положительных целых делителей.
 Если есть несколько чисел от 1 до n с максимальным числом делителей,
 выведите любое из них.
*/
#include <iostream>
#include <cmath>

using namespace std;


int main(){

    double n, temp = 0, rez = 0;
    int chisl;
    cin>>n;
    for(int j = 1; j<=n; j++){
        temp = 2*pow(j, 1.0 / 3.0);//число делителей не превосходит двух кубических корней из числа
        if(rez <= temp){
            rez = temp;
            chisl = j;
        }
        temp = 0;
    }
    rez = 0;
    for(int i = 1; i<=chisl; i++){
        if(chisl % i == 0){
            rez++;
        }
    }
    cout<<chisl<<endl<<rez;

    return 0;
}
