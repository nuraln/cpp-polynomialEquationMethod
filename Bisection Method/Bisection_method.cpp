#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
float f(float x);
int main()
{
float x1,x2,xt,error,tol;
int i=1;

//	1. Menentukankan input sembarang titik x1 dan x2 untuk kemudian dihitung nilai fungsinya
cout<<"f(x) =x^3+x^2-3x-3"<<endl;
cout<<"Masukkan titik x1: "; cin>>x1;
cout<<"Masukkan titik x2: ";cin>>x2;

//	2.Ccek apakah f(x1)*f(x2)>0
if (f(x1)*f(x2)>0){
do{
 cout<<"Masukkan lagi x1 dan x2 sehingga f(x1)*f(x2)<0 (salah satu nilai x1 atau x2 harus bernilai negatif)"<<endl;
 cout<<"Masukkan titik x1: "; cin>>x1;
 cout<<"Masukkan titik x2: ";cin>>x2;
 }
while (f(x1)*f(x2)>0);
}

//	3. Menentukan nilai epsilon
cout<<"Masukkan nilai batas kesalahan (epsilon): ";cin>>tol;
{
cout<<"\n\n\nHasil perhitungan akar-akar persamaan tersebut adalah: \n"<<endl;
cout<<setw(5)<<"i"<<setw(15)<<"x1"<<setw(20)<<"x2"<<setw(20)<<"xt"<<setw(20)<<"f(x1)";
cout<<setw(20)<<"f(x2)"<<setw(20)<<"f(xt)"<<setw(20)<<"error"<<endl;

// 4. Menghitung nilai xt dan nilai fungsi f(xt)
do
{
xt=(x1+x2)/2;
error= abs(x2-x1);
cout<<setw(5)<<i<<setw(15)<<x1<<setw(20)<<x2<<setw(20)<<xt<<setw(20)<<f(x1)<<setw(20);
cout<<f(x2)<<setw(20)<<f(xt)<<setw(20)<<error<<endl;
if(f(x1)*f(xt)<0)
{x2=xt;}
else
{x1=xt;
}
i++;
}
while( (error > tol) && (i < 40));
cout<<"\n\nApprox. root = "<<xt<<endl;
cout<<"Banyaknya iterasi : "<<i-40;
}
getch();
return 0;
}
float f(float x)
{
return (pow(x,3)+(x,2)-(3*x)-3);
}
