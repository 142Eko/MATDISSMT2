#include <iostream>
#include <fstream>
using namespace std;
/*
main(){
	cout<<"+--------------------------------+\n";
	cout<<"|\tDaftar Nilai Alpro\t|\n";
	cout<<"+--------------------------------+\n";
	cout<<"| Nama Dosen	: Nama\t\t|\n";
	cout<<"| Nilai		: ";
	for(int i = 0 ; i<4 ; i++){
		if(i==0){
			cout<<i<<"\t\t|\n";
		}
		else{
		cout<<"|\t\t  "<<i<<"\t\t|\n"; 	
		}
		//Loop\t\t|\n";
	}
	cout<<"+--------------------------------+\n";
	cout<<"| Nilai terendah	: p\t|\n";
	cout<<"+--------------------------------+\n";
	cout<<"| Nilai tertinggi	: p\t|\n";
	cout<<"+--------------------------------+\n";
	cout<<"| Nilai Rata-rata	: p\t|\n";
	cout<<"+--------------------------------+\n";
	
}
*/
main(){
	ofstream txt("invoice.txt");
	txt<<"+-----------------------------------------------+\n";
	txt<<"|\t\tBukti Pembayaran\t\t|\n";
	txt<<"+-----------------------------------------------+\n";
	txt<<"| Nama Pelanggan	: EKO\t\t\t|\n";
	txt<<"| Alamat tujuan 	: alamat\t\t|\n";
	txt<<"| Asuransi produk	: ya\t\t\t|\n";
	txt<<"| Ekspedisi		: JNE\t\t\t|\n";
	txt<<"+-----------------------------------------------+\n";
	txt<<"| Nama barang	: alpro\t\t\t\t|\n";
	txt<<"| Jumlah barang	: 0\t\t\t\t|\n";
	txt<<"+-----------------------------------------------+\n";
	txt<<"| Diskon	: Rp.0\t\t\t\t|\n";
	txt<<"| Total bayar	: p\t\t\t\t|\n";
	txt<<"+-----------------------------------------------+\n";
	txt<<"|\tHarap simpan bukti pembayaran\t\t|\n";
	txt<<"|\t\tTerimakasih\t\t\t|\n";
	txt<<"+-----------------------------------------------+\n";
	txt.close();
	
}
