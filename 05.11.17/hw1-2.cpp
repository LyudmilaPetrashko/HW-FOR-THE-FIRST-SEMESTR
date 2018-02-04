#include <iostream> 
using namespace std; 
    //Напишите программу для работы с датами согласно григорианскому календарю.  
    //В программе должны присутствовать: 
    //структура хранящая год,месяц, число и умеющая 
     //(с помощью соответствующего метода) определять по дате день недели 
     //3 функции определяющие сколько лет, месяцев и дней прошло между двумя датами 
 
struct Calendar{    
int  year, month, day; 
Calendar (int a, int b, int c):    
    year(c), month(b), day(a){} 
int Date(){    
int  k, l, m, n; 
k = ( 14 - month ) / 12; 
l = year - k; 
m= month + 12 * k - 2; 
n = (7000 + ( day + l + l / 4 - l / 100 + l / 400 + (31 * m) / 12 )) % 7; 
return n; 
}    
int d1, d2, m1, m2, y1, y2; 
Calendar (int e, int d, int f, int g, int h, int i):  
   d1(e), m1(d), y1(f), d2(g), m2(h), y2(i){} 
int Days(){    
int t; 
t= ( 1461 * ( y1 + 4800 + ( m1 - 14 ) / 12)) / 4 + 
( 367 * ( m1 - 2 - 12 * (( m1 - 14 ) / 12))) / 12 - 
3 * (( y1 + 4900 + ( m1 - 14 ) / 12) / 100) / 4 + d1 - 32075 
- (( 1461 * ( y2 + 4800 + ( m2 - 14 ) / 12)) / 4 + 
( 367 * ( m2 - 2 - 12 * (( m2 - 14 ) / 12))) / 12 - 
3 * (( y2 + 4900 + ( m2 - 14 ) / 12) / 100) / 4 + d2 - 32075); 
   if (t < 0) t= -t; 
      return t; 
}    
 
int Month(){    
   if (y1 < y2){ 
      int p= y1, u = m1, q= d1; 
      y1 = y2; 
      m1 = m2; 
      d1 = d2; 
      y2 = p; 
      m2 = u; 
      d2 = q; 
 
   } 
int h=0; 
   if (y1 == y2){ 
      if (m1 > m2){ 
         if (d1 >= d2) 
            h = m1 - m2; 
         else 
            h= m1 - m2 - 1; 
                  } 
      if (m1 == m2){ 
         h= 0; 
      } 
      if (m1 < m2){ 
         if (d1 > d2) 
            h = m1 - m2 + 1; 
         else 
            h= m1 - m2; 
      } 
      if(h < 0) 
         h=-h; 
   } else { 
        if (m1 < m2){ 
           if (d1 > d2){ 
              h= (12 - m2) + m1; 
           } else { 
                h= (12 - m2) + m1 -1; 
             }     } else { 
             if (d1 > d2){ 
                h= m1 - m2 -1; 
             } else { 
                  h = m1 - m2; 
               }   }} 
return h; 
}    int Years(){    
   if (y1 < y2){ 
      int p= y1, u = m1, q= d1; 
      y1 = y2; 
      m1 = m2; 
      d1 = d2; 
      y2 = p; 
      m2 = u; 
      d2 = q; 
   } 
int y = 0; 
   if (y1 != y2){ 
      if (m1 > m2) 
         y = y1 - y2; 
      if (m1 == m2){ 
         if (d1 >= d2) 
            y = y1 - y2; 
         else 
            y = y1 - y2 - 1; 
      } 
      if (m1 < m2) 
         y = y1 - y2 - 1; 
   } else { 
        y = 0; 
     } 
return  y; 
}    
};    
int main(){ 
int  a, b, c; 
cout << "enter the day: "; 
cin >> a; 
cout << "enter the month: "; 
cin >> b; 
cout << "enter the year: "; 
cin >> c; 
Calendar temp1(a, b, c); 
cout<<endl<<"Day of the week: "; 
        if(temp1.Date()==1) 
        cout<< "Monday" << endl; 
    else if(temp1.Date()==2) 
        cout<< "Tuesday" << endl; 
    else if(temp1.Date()==3) 
        cout<< "Wednesday" << endl; 
    else if(temp1.Date()==4) 
        cout<< "Thursday" << endl; 
    else if(temp1.Date()==5) 
        cout<< "Friday" << endl; 
    else if(temp1.Date()==6) 
        cout<< "Saturday" << endl; 
    else if(temp1.Date()==0)   //  
        cout<< "Sunday" << endl; 
 
int e,d,f, g, h, i; 
cout << "first date (DD.MM.YY): " << endl; 
cout << "the day: "; 
cin >> e; 
cout << "the month: "; 
cin >> d; 
cout << "the year: "; 
cin >> f; 
cout << "second date (DD.MM.YY): " << endl; 
cout << " the day: "; 
cin >> g; 
cout << "the month: "; 
cin >> h; 
cout << "the year: "; 
cin >> i; 
Calendar temp2(e, d, f, g, h, i); 
cout <<endl<< "Years: "<<temp2.Years() << endl;   
cout <<"Monhts: "<< temp2.Month() + temp2.Years() * 12 << endl; 
cout << "Days: "<<temp2.Days() << endl; 
return 0; 
} 
