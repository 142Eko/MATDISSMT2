#include <iostream>
#include <stdlib.h>
using namespace std;
int hitung1(int x, int y){
	if(x>=y){
		if(x%y);
		else
		int faktor1=x;
		hitung1(x-1,y);
	}
}
int hitung2(int l,int m){
	if(l>=m){
		if(l%m);
		else
	    int faktor2=l;
	    hitung2(l-1,m);
	}
}
int hitung3(int r,int s,int t){
	if(r>=t){
		if(r%s);
		else
		int faktor1=r;
		hitung3(r-1,s,t);
	}
}
main(){
	system("cls");
	int a,b,faktor1,faktor2,fpb;
		cout<<"Menghitung FPB\n";
		cout<<"Masukkan bilangan pertama	: ";
		cin>>a;
		cout<<"Masukkan bilangan kedua 	: ";
		cin>>b;
		if(a){
			if(b%a){
		    hitung1(0,a);
			hitung2(0,b);
			hitung3(0,a,b);
			}
		}
		else
		fpb=b;
		fpb=faktor1+faktor2;
		cout<<"=====================================\n";
		cout<<"Bilangan pertama	= "<<a<<endl;
		cout<<"Bilangan kedua		= "<<b<<endl;
		cout<<"FPB			= "<<fpb<<endl;
		cout<<"=====================================\n";
	system("PAUSE");
	return 0;
}
