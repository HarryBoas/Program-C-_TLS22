#include<iostream>
using namespace std;

//Currency converter rupiah to dolar, pounds, yen, and won//
int main()
{
 //variable declaration//
 int rupiah;
 float dollar, pounds, yen, won;

 //input rupiah//
 cout<<"nominal uang (rupiah) = ";
 cin>>rupiah;

 //calculation//
 dollar=rupiah*0.000065;
 pounds=rupiah*0.000059;
 yen=rupiah*0.0095;
 won=rupiah*0.094;

 cout<<"nominal dalam dollar = "<<dollar <<" USD "<<endl;
 cout<<"nominal dalam pounds = "<<pounds <<" GBP "<<endl;
 cout<<"nominal dalam yen = "<<yen<<" JPY "<<endl;
 cout<<"nominal dalam won = "<<won<<" KRW "<<endl;

 return 0;
}