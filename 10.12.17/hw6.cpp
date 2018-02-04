#include <iostream>

//Напишите программу выводящую все несократимые дроби с неотрицательными знаменателем
//и числителем не превышающим N, в порядке возрастания. Будем считать дробь 1/0 - максимальной несократимой. 

using namespace std;
int NOD(int a, int b){
    int m=1;
    if(a==0&&b==0){
        return 0;
    }
    else if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else {
        for(int i=2; i<=abs(a) || i<=abs(b); i++ ) {
            if (a % i == 0 && b % i == 0) {
                m = i;
            }

        }
    }
    return m;
}


int main(){

    int n;
    cin>>n;

    for(int i=0; i<n+1; i++){
        for(int j=0; j<n+1; j++){

            if( NOD(i,j) <= 1 && !( i == 1 && j == 1) && !( i == 0 && j == 0)){
                cout<<i<<"/"<<j<<" ";
            }
        }
    }
    return 0;
}
