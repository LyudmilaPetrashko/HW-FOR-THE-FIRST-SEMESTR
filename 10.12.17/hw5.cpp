#include <iostream>
#include <cmath>

// Напишите программу, которая находит количество сократимых
// правильных дробей вида m/n для заданного знаменателя .


using namespace std;
    int NOD(int a, int b){
        int m=1;

        if(a==0&&b==0){
            return 0;
        }
        if(a==0){
            return b;
        }

        else if(b==0){
            return a;
        }
        else
        {

            for(int i=2; i<abs(a) || i<abs(b); i++ ){
                if(a % i == 0 && b % i == 0){
                    m=i;
                }
            }
        }
        return m;

    }


int main(){

    int n, h=0;
    cin>>n;
    if(n==0){
        return 0;
    }
    for(int m=0; abs(m)<abs(n); m++){
        if(NOD(m,n)!=1){
            h++;
        }

    }
    cout<< h;
    return 0;
}
