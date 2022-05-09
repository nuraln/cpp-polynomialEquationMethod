#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

float x0,tol;
int max_iter;
float g(float x){
	return pow((x*x)+(5*x)-(4),(float)1/3);
}

int main(){
	int it;
	float epsilon,xb;
	
	printf("PROGRAM NUMERIK METODE ITERASI (DIRECT) \n\n");
	printf("Persamaan Fungsi :  f(x)=-x^3+x^2+5x-4 \n\n");
		
	printf("Masukkan Nilai Awal	: "); scanf("%f",&x0);
	printf("Masukkan Nilai Toleransi Error	: "); scanf("%f",&tol);
	printf("Jumlah Iterasi Maksimum = "); scanf("%d",&max_iter);
	it = 0;
	
	printf("\n\nHasil Iterasi : \n");
	
	printf("It.	x	g(x)	f(x)\n");
	
	do{
		it = it + 1;
		xb = g(x0);
		epsilon = fabs(xb-x0);
		printf("%3d %8.5f %8.5f %8.2e\n",it,x0,xb,epsilon);
		x0 = xb;
	} while(it <= max_iter && epsilon > tol);
	
	if(it<=max_iter){
		printf("Jadi, hasil yang memenuhi dari persamaan tersebut adalah x = %g\n",xb);
	}
	else printf("Toleransi tidak terpenuhi\n");
}
