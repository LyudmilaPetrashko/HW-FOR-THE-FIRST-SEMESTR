#include <iostream>
//Гоночная трасса состоит из двух основных дорог и нескольких переездов
//позволяющих перейти с одной дороги на другую. На всех участках, включая переезды, 
//движение разрешено только в одну сторону, поэтому переезд возможен только с дороги A
//на дорогу B. Гонщик стартует в точке A0 и должен финишировать в точке BN.
//Он знает, за какое время сможет пройти каждый участок пути по каждой дороге, то есть
// время прохождения участков A0A1, A1A2, …, AN-1AN, B0B1, B1B2, …, BN-1BN.
// Время прохождения всех переездов A0B0, A1B1, …, ANBN одинаково и известно гонщику.
//Необходимо определить, за какое минимальное время гонщик сможет пройти трассу.


using namespace std;


int main(){

    int n, m;
    cin>>n>>m;

    int* arr1 = new int[n];
    int* arr2 = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }

    int temp=0, min;

    for(int i = 0; i<n; i++){
        min +=arr1[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(j<=i){
             temp+=arr1[j];
            }
            else{
              temp+=arr2[j];

            }
        }
        temp+=m;

     if(temp<min){
         min=temp;
     }
        temp=0;
    }
 cout<<min;
    return 0;
}