#include <iostream>
using namespace std;

main(){
	string a[100]; 
	string b[100];
	int banyakA,banyakB,banyakC,banyakD;
	int c[100];
	int d[100];
	int i;
	cout<<"GABUNGAN 2 HIMPUNAN\n"; 
	cout<<"A dan B adalah (kata) | C dan D adalah (angka)\n";
	cout<<"============================\n\n";
	cout<<"Masukkan banyaknya anggota himpunan A : "; cin>>banyakA;
	for(i=0;i<banyakA;i++){	
	cout<<"Masukkan anggota " << i+1 << " : "; cin>>a[i];
	}
	cout<<"\nMasukkan banyaknya anggota himpunan B : "; cin>>banyakB;
	for(i=0;i<banyakB;i++){
		cout<<"Masukkan anggota " << i+1 << " : "; cin>>b[i];
	}
	cout<<"\nMasukkan banyaknya anggota himpunan C : "; cin>>banyakC;
	for(i=0;i<banyakC;i++){	
	cout<<"Masukkan anggota " << i+1 << " : "; cin>>c[i];
	}
	cout<<"\nMasukkan banyaknya anggota himpunan D : "; cin>>banyakD;
	for(i=0;i<banyakD;i++){	
	cout<<"Masukkan anggota " << i+1 << " : "; cin>>d[i];
	}
	cout<<"============================\n\n";
	cout << "\n\nHasil penggabungan a dan b : { " << endl;
	for(int i=0; i<banyakA;) {
		for(int j=0; j<banyakB; j++) {
			cout << "(" + a[i] + "," + b[j] + ")";
			} 
			i++;
			}
			cout << "}" << endl;
	cout << "\n\nHasil himpunan c habis membagi d :\n{"; 
	for( int k = 0 ; k < banyakC;){
			for(int l = 0; l<banyakD; l++){
				if(d[l] % c[k] == 0){
					cout<<"("<<c[k]<<","<<d[l]<<"), ";
				}
	}
				k++;
	}
	cout << "}\n";
	cout << "\n\nHasil himpunan d habis membagi c :\n{"; 
	for( int m = 0 ; m < banyakD;){
			for(int n = 0; n<banyakC; n++){
				if(c[n] % d[m] == 0){
					cout<<"("<<d[m]<<","<<c[n]<<"), ";
				}
	}
				m++;
	}
	cout << "}\n";
}
