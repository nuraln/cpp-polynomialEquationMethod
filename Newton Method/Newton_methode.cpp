#include<stdio.h>
#include<math.h>
#include<conio.h>

float Fungsi(float x);
float FungsiTurunan(float x);
float e;

main(){
	int n = 0;
	float x[100];
	printf("PROGRAM NUMERIK METODE NEWTON \n\n");
	printf("Persamaan Fungsi :  f(x)=x^3+x^2+5x-4 \n");
	printf("dengan x(n+1) = xn - (f(xn)/f'(xn))\n\n");
	
//	inputan
	printf("Masukkan Nilai x Awal	: "); scanf("%f", &x[0]);
	printf("Masukkan Nilai Toleransi Error	: "); scanf("%f", &e);
	
	
//	menampilkan tabel hasil iterasi
	printf("\n\n\nHasil Iterasi : \n");
	printf("==================================================================\n");
	printf("! n ! xn ! f(xn) ! f'(xn) ! f(xn)/f'(xn) ! x(n+1) !\n");
	printf("==================================================================\n");
	
//	struktur kondisi metode Newton
	do{
		x[n+1]= x[n] - (Fungsi(x[n])/FungsiTurunan(x[n]));
		printf("! %d ! %2.4f ! %2.4f ! %2.4f ! %2.4f ! %2.4f !\n", n, x[n], Fungsi(x[n]), FungsiTurunan(x[n]), Fungsi(x[n])/FungsiTurunan(x[n]), x[n+1]);
		n++;
	} while (abs(x[n-1])-(x[n-2])>e);
	
	printf("! %d ! %2.4f ! %2.4f ! %2.4f ! %2.4f ! %2.4f !\n", n, x[n], Fungsi(x[n]), FungsiTurunan(x[n]), Fungsi(x[n])/FungsiTurunan(x[n]), x[n+1]);
	printf("==================================================================\n");
	printf("Jadi, hasil yang memenuhi dari persamaan tersebut adalah x = %2.4f", x[n]);
	getch();	
}

//	membuat function Fungsi
float Fungsi(float x){
	return pow (x,3)+(x,2)+(5*x)-4;
}

//	membuat function FungsiTurunan
float FungsiTurunan(float x){
	return pow (3*x,2)+(2*x)+5;
}


