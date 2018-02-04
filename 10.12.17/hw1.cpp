#include <iostream>
//Напишите эффективную по времени и памяти программу, которая для заданной последовательности
//целых чисел находит минимальную сумму двух её элементов, номера которых различаются не менее
//чем на 5. Значение каждого элемента последовательности не превышает 1000.
//Количество элементов последовательности не превышает 10000.

using namespace std;


int main(){

    int l;
    cin>>l;

    int* arr = new int[l];

    for(int i = 0; i<l; i++){
        cin>>arr[i];
    }
    if(l<=5){
        cout<<"wrong";
        return 0;
    }

    int temp, min = arr[0]+arr[5];
    for(int i = 0; i<l; i++){
        for(int j = i+5; j<l; j++){
            temp = arr[i] + arr[j];
            if(temp<min){
                min=temp;
            }
        }
    }
    cout<<min;

    return 0;
}
