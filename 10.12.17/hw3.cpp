/*Напишите эффективную функцию находящую k-ую порядковую статистику в массиве.
Программа должна состоять из этой функции и примера её использования в main.*/


#include <iostream>

using namespace std;

int f(int* arr, int n, int k){

    int min_k = arr[0], num = 0;

    for(int j = 0; j < k; j++){
        for(int i = 0; i < n - j; i++){
            if(arr[i] < min_k){
                min_k = arr[i];
                num = i;
            }
        }
        swap(arr[num], arr[n-1-j]);
        if(j != k-1){
            min_k = arr[0];
        }
        else{
            return min_k;    
        }
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    return min_k;
}

int main()
{
    int a, b;

    cin >> a >> b;

    int* Arr = new int[a];

    for(int i = 0; i < a; i++){
        cin >> Arr[i];
    }

    cout << f(Arr, a, b);

    return 0;
}
