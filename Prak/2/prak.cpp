#include <iostream>
using namespace std;

main(){
	string a[] = {"eko", "uad"}; 
	string b[] = {"210", "018","142"};
	int c[] = {2, 3, 4};
	int d[] = {2, 6, 8, 9, 12};
	cout << "Hasil penggabungan a dan b : { " << endl;
	for(int i=0; i<2;) {
		for(int j=0; j<3; j++) {
			cout << "(" + a[i] + "," + b[j] + ")";
			} 
			i++;
			}
			cout << "}" << endl;
	cout << "\n\nHasil himpunan c habis membagi d :\n{"; 
	for( int k = 0 ; k < 3;){
			for(int l = 0; l<5; l++){
				if(d[l] % c[k] == 0){
					cout<<"("<<c[k]<<","<<d[l]<<"), ";
				}
	}
				k++;
	}
	cout << "}\n";

}
