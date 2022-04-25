#include <iostream>
#include <stdio.h>
long int Fak_rekursif (int n){
	long int f;
	if(n<=1)
	return (1);
	else{
		f=n*Fak_rekursif(n-1);
		return (f);
	}
}
main(){
	int n; n=5;
	printf("%d faktorial = %ld\n",n,Fak_rekursif(n));
}
