#include <iostream>
using namespace std;
class fak{
	private:
		int i,b,x,n,pilih;
		long int faktorial =1;
	public:
		void iteratif(){
			cout<<"Masukkan angka yang ingin difaktorial (iteratif)= ";cin>>b;
			for(i =1;i <= b; i++){
				faktorial=faktorial*i;
			}
			cout<<"Hasil secara iteratif dari "<<b<<" faktorial = "<<faktorial;
			}

		int rekursif(int n){
			if(n==0){
				return 1;
			}
			else{
			return (n*rekursif(n-1));
		}
		}
		
		void kasus(){
			cout<<"Pilih perulangan : \n";
			cout<<"1.Iteratif \n";
			cout<<"2.Rekursif \n";
			cout<<"==================\n";
			cout<<"Pilih 1 | 2 = ";cin>>pilih;
			cout<<"==================\n";
			switch(pilih){
				case 1:
						iteratif();
				break;
				case 2:
						cout<<"Masukkan angka yang ingin difaktorial (rekursif) =";cin>>x;
						cout<<"Hasil secara iteratif dari "<<x<<" faktorial = "<<rekursif(x);
				break;
				default:
						cout<<"Input tidak sesuai,mohon masukkan 1 | 2";
				break;
			}
		}
};
int main(){
	fak f;
	f.kasus();
	return 0;
}
