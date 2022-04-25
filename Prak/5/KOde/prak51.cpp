#include <iostream>
using namespace std;
double Absolut (double x){
		if (x<0)
		x = -x;
		return(x);
	}
main(){
	float nilai;nilai= -123.45;
	cout<<nilai<<" Nilai mutlaknya adalah "<<Absolut(nilai);
}
