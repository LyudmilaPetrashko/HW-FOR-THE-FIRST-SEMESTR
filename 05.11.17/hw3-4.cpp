#include <iostream> 
using namespace std; 
//Напишите программу для работы с оценками за сессию студентов. 
// В программе должна присутствовать структура хранящая ФИО, оценки за 6 
// экзаменов для каждого ученика и умеющая (соответствующими методами) 
// вычислять средний балл студента, наличие стипендии(стипендия начисляется 
// закрывшим сессию без троек),  задолженностей (сессия считается закрытой без 
// долгов, если все оценки выше 2) 
//в программе должны быть функции для работы с массивом студентов находящие 
// средний балл(всех без двух лучших и двух худших), количества стипендиатов, 
// должников и отчисленных(более двух долгов) 
 
struct Mark{ 
int ex[6]; 
}; 
struct Man{ 
char Surname[64], Name[64], Patronymic[64]; 
Mark temp; 
double Middle_mark; 
bool Grant, Debt; 
}; 
 
double Mid_mark( double a, double b, double c, double d, double e, double f){ 
double x; 
x=(a+b+c+d+e+f)/6; 
return x; 
} 
 
bool Gr( double a, double b, double c, double d, double e, double f){ 
if(a<=3||b<=3||c<=3||d<=3||e<=3||f<=3){ 
return 0; 
} else { 
return 1; 
}} 
 
bool De( double a, double b, double c, double d, double e, double f){ 
if(a==2||b==2||c==2||d==2||e==2||f==2){ 
return 1; 
} else { 
return 0; 
}} 
 
void Show_data( Man Obj[], int amount){ 
for( int k=0; k<amount; k++){ 
double x; 
bool y,z; 
x= Mid_mark(Obj[k].temp.ex[0], Obj[k].temp.ex[1], Obj[k].temp.ex[2], Obj[k].temp.ex[3], Obj[k].temp.ex[4], Obj[k].temp.ex[5]); 
y=Gr(Obj[k].temp.ex[0], Obj[k].temp.ex[1], Obj[k].temp.ex[2], Obj[k].temp.ex[3], Obj[k].temp.ex[4], Obj[k].temp.ex[5]); 
z= De(Obj[k].temp.ex[0], Obj[k].temp.ex[1], Obj[k].temp.ex[2], Obj[k].temp.ex[3], Obj[k].temp.ex[4], Obj[k].temp.ex[5]); 
cout<<k+1<<". "<<Obj[k].Surname<<" "<<Obj[k].Name<<" "<<Obj[k].Patronymic<<endl<<"middle mark: "<<x<<endl<<"grant: "; 
if(y==1){ 
cout<<"yes"<<endl; 
} else { 
cout <<"no"<<endl; 
} cout<< "debts: "; 
if(z==1){ 
cout<<"yes"<<endl; 
} else { 
cout<<"no"<<endl; 
} cout<<endl; 
}} 
 
int grant_holder( Man student[], int n){ 
int g=0; 
for(int m=0; m<n; m++){ 
bool x; 
x=Gr(student[m].temp.ex[0], student[m].temp.ex[1], student[m].temp.ex[2], student[m].temp.ex[3], student[m].temp.ex[4], student[m].temp.ex[5]); 
if(x==1) 
g++; 
} return g; 
} 
 
int debtor(Man student[], int n){ 
int j=0,h=0; 
for(int a=0;a<n;a++){ 
for(int b=0; b<6; b++){ 
if (student[a].temp.ex[b]==2){ 
j++; 
}} if(j>=1&&j<=2){ 
h++; 
} j=0; 
} return h; 
} 
 
int exp_student(Man student[], int n){ 
int p=0, q=0; 
for(int c=0; c<n; c++){ 
for(int e=0; e<6; e++){ 
if(student[c].temp.ex[e]==2){ 
p++; 
}} if(p>2){ 
q++; 
}} return q; 
} 
 
int main(){ 
int n; 
cin>>n; 
Man student[n]={}; 
cin.get(); 
for(int i=0; i<n; i++){ 
cout<<"Surname: "; 
cin.getline(student[i].Surname, 64); 
cout<<"Name: "; 
cin.getline(student[i].Name, 64); 
cout<<"Patronymic: "; 
cin.getline(student[i].Patronymic, 64); 
cout<<"Marks: "; 
cin>>student[i].temp.ex[0]>> student[i].temp.ex[1]>> student[i].temp.ex[2]>> student[i].temp.ex[3]>> student[i].temp.ex[4]>> student[i].temp.ex[5]; 
cin.get(); 
cout<<endl; 
} 
Show_data(student, n); 
cout <<endl<<"Amount of grant holders: "<< grant_holder(student, n); 
cout<<endl<<"Amount of debtors: "<<debtor(student, n); 
cout<<endl<<"Amount of expelled students: "<<exp_student (student, n); 
 
 
return 0; 
}
