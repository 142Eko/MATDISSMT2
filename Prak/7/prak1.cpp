#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	int x,a,b;
	char i;
	{
		b=1;
		i1:system("cls");
		cout<<"PROGRAM UNTUK MEMERIKSA BILANGAN PRIMA"<<endl<<endl;
		cout<<"Masukkan Bilangan Untuk Di Cek : ";
		cin>>x;
		cout<<endl;
		for (a = 2; a<=x-1; a++){
			if(x%a==0){
				b=0;
				break;
			}
		}
		if (b==1){
			cout<<x<<" Merupakan Bilangan Prima";
		}
		else{
			cout<<x<<" Bukan Merupakan Bilangan Prima";
		}
		if(b==0)
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"Ulangi (y/n) ? ";
		cin>>i;
		if(i=='y')
		goto i1;
		else
		cout<<"Terima Kasih";
	}
}
