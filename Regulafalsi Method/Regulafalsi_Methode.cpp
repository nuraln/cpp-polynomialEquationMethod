 #include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void gotoxy(int xt, int y){
            COORD coord;
            coord.X = xt;
            coord.Y = y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main () {
	menu: 
	double x, x1,x2,e,xt,error=1;
	int n;
	string a;
	cout<<" |                                                   Metode Regula Falsi                                                   | \n";
	cout<<"------------------------------------------------------------------------------------------------------------------------------ \n";
	
	cout<<" Masukkan batas bawah persamaan (x1)	: ";cin>>x1;
	cout<<" Masukkan batas atas pesamaan (x2)	: ";cin>>x2;
	cout<<" Masukkan Toleransi Error		: ";cin>>e;
	cout<<" Masukkan Iterasi Maximum		: ";cin>>n;
	
	double Fx1=(4.0*pow(x,3.0))+(5.0*x)-(3.0);
	double  Fx2=(4.0*pow(x,3.0))+(5.0*x)-(3.0);


	if (Fx1*Fx2>0){
	            gotoxy(2,9);cout<<"F(x1)*F(x2)         :"<<Fx1*Fx2;
	            gotoxy(2,10);cout<<"Tidak ada akar di antara kedua batas persamaan \n";
	            system("pause");
	            system("cls");
	            goto menu;
	           
	} else {
		gotoxy(2,10);cout<<"----------------------------------------------------------------------------------------------------------------------------- \n";
		gotoxy(2,11);cout<<"|Literasi|       x1      |      x2     |      xt     |       f(x1)     |      f(x2)     |       f(xt)      |      Error     | \n";
		gotoxy(2,12);cout<<"------------------------------------------------------------------------------------------------------------------------------ \n";
		
		for(int iterasi=1;iterasi<=n;iterasi++){
		     
			xt=(Fx2*x1-Fx1*x2)/(Fx2-Fx1);
			double fxt=(4.0*pow(xt,3.0))+(5.0*xt)-(3.0);
			error=fxt*-1;
			
			gotoxy(2,12+iterasi);cout<<"|";
			gotoxy(6,12+iterasi);cout<<iterasi;
				
			gotoxy(11,12+iterasi);cout<<"|";
			gotoxy(13,12+iterasi);printf("%1.10f",x1);
				
			gotoxy(27,12+iterasi);cout<<"|";
			gotoxy(29,12+iterasi);printf("%1.10f",x2);
			
			
			gotoxy(41,12+iterasi);cout<<"|";
			gotoxy(43,12+iterasi);printf("%1.10f",xt);
			
			gotoxy(73,12+iterasi);cout<<"|";
			gotoxy(75,12+iterasi);printf("%1.10f",Fx1);
			
			gotoxy(90,12+iterasi);cout<<"|";
			gotoxy(92,12+iterasi);printf("%1.10f",Fx2);
			
			gotoxy(55,12+iterasi);cout<<"|";
			gotoxy(57,12+iterasi);printf("%1.10f",fxt);
			
			gotoxy(109,12+iterasi);cout<<"|";
			gotoxy(111,12+iterasi);printf("%1.10f",error);
			gotoxy(126,12+iterasi);cout<<"|";
			
			
			if (error < e){
			gotoxy(1,13+iterasi);cout<<"--------------------------------------------------------------------------------------------------------- \n";
			iterasi=n+1;
			
			}
		}
	}
}








