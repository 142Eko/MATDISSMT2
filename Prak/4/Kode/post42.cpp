#include <iostream>
using namespace std;
class fibo{
	private:
		int n,n1=1,n2=1;
		long int fibon=0;
	public:
		void hitung()
		{
				cout<<"Masukkan suku ke-";
				cin>>n;
				for(int i = 1;i <=n;i++)
				{
					if((i==1)||(i==2)){
						cout<<n1<<" ";
						continue;
					}
					fibon=n1+n2;
					n1=n2;
					n2=fibon;
					cout<<fibon<<" ";
				}	
			
		}
};	

main(){
	fibo o;
	o.hitung();
}
