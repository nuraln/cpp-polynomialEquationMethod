#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#define    f(x)    x*x*x + x*x + 5*x - 4

using namespace std;

int main()
{
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1, N;
	 
   cout<< setprecision(6)<< fixed;

	printf("\t\t\t\tPROGRAM NUMERIK METODE SECANT \n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("Persamaan Fungsi :  f(x)=x^3+x^2+5x-4 \n\n\n");	
	
	cout<<"Masukkan Nilai x Pertama: ";
	cin>>x0;
	cout<<"Masukkan Nilai x Kedua: ";
	cin>>x1;
	cout<<"Masukkan Nilai Toleransi : ";
	cin>>e;
	cout<<"Masukkan Maksimum Iterasi: ";
	cin>>N;

	printf("\n\n\nHasil Iterasi : \n");
	do{
		f0 = f(x0);
		f1 = f(x1);
		if (f0 == f1) {
		    cout<<"Mathematical Error.";
			exit(0);
		}

		x2 = x1 - (x1 - x0) * f1/(f1-f0);
		f2 = f(x2);
		cout<<"Iterasi-"<< step<<":\t x2 = "<< setw(10)<< x2<<" and f(x2) = "<< setw(10)<< f(x2)<< endl;

		x0 = x1;
		f0 = f1;
		x1 = x2;
		f1 = f2;
		step = step + 1;
		if (step > N) {
			cout<<"Not Convergent.";
			exit(0);
		}
	} while (fabs(f2)>e);
		cout<< endl<<"Hasil yang memenuhi dari persamaan tersebut adalah: "<< x2;

	 return 0;
}




