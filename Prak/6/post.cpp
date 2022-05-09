#include <iostream>
#include <stdlib.h>
using namespace std;
int hitung1(int x, int y,int faktor1){
	if(x>=y){
		if(x%y);
		else
		faktor1=x;
	}
	else{
		hitung1(x-1,y,faktor1);
	}
}
int hitung2(int l,int m,int faktor2){
	if(l>=m){
		if(l%m);
		else
	    faktor2=l;
	}
	else{
		hitung2(l-1,m,faktor2);
	}
}
int hitung3(int r,int s,int faktor1){
	if(r>=s){
		if(r%s);
		else
		faktor1=r;
	}
	else{
		hitung2(r-1,s,faktor1);
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
		if(a)
			if(b%a){
		    hitung1(0,a,faktor1);
			hitung2(0,b,faktor2);
			hitung3(0,b,faktor1);
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
