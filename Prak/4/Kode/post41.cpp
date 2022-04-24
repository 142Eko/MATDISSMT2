#include <iostream>
#include <math.h>
using namespace std;
class fak{
	private:
		int i,b;
		long int faktorial =1;
	public:
		void hit(){
			cout<<"Faktorial	= ";cin>>b;
			for(i =1;i <= b; i++){
				faktorial=faktorial*i;
			}
			cout<<"\nHasil		= "<<faktorial;
		}
};
int main(){
	fak f;
	f.hit();
	return 0;
}

